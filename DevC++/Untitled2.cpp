#include <windows.h>
#include <vector>
#include <ctime>
#include <cstdlib>

#define IDT_TIMER1 1
const int CELL_SIZE = 20;
const int GRID_WIDTH = 30;
const int GRID_HEIGHT = 20;

std::vector<POINT> snake;
POINT apple;
int dirX = 1, dirY = 0;
BOOL gameOver = FALSE;
HBRUSH hRedBrush = NULL; // Red brush for apple

// Spawns the apple in a random position not occupied by the snake
void SpawnApple() {
    bool collision;
    do {
        collision = false;
        apple.x = rand() % GRID_WIDTH;
        apple.y = rand() % GRID_HEIGHT;
        for (auto &segment : snake) {
            if (segment.x == apple.x && segment.y == apple.y) {
                collision = true;
                break;
            }
        }
    } while (collision);
}

// Moves the snake one step based on current direction, handles collisions and apple
void MoveSnake() {
    POINT newHead = { snake.front().x + dirX, snake.front().y + dirY };
    // Check wall collision
    if (newHead.x < 0 || newHead.x >= GRID_WIDTH || newHead.y < 0 || newHead.y >= GRID_HEIGHT) {
        gameOver = TRUE;
        return;
    }
    // Check self collision
    for (auto &segment : snake) {
        if (segment.x == newHead.x && segment.y == newHead.y) {
            gameOver = TRUE;
            return;
        }
    }
    // Move snake
    snake.insert(snake.begin(), newHead);
    // Check if apple eaten
    if (newHead.x == apple.x && newHead.y == apple.y) {
        SpawnApple();
    } else {
        snake.pop_back();
    }
}

// Window procedure
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    switch (message) {
    case WM_CREATE:
        srand((unsigned)time(NULL));
        // Create red brush for apple
        hRedBrush = CreateSolidBrush(RGB(255,0,0));
        snake.clear();
        snake.push_back({ GRID_WIDTH / 2, GRID_HEIGHT / 2 });
        SpawnApple();
        SetTimer(hWnd, IDT_TIMER1, 100, NULL);
        return 0;
    case WM_TIMER:
        if (!gameOver) {
            MoveSnake();
            InvalidateRect(hWnd, NULL, TRUE);
        }
        return 0;
    case WM_KEYDOWN:
        switch (wParam) {
        case VK_UP:
            if (dirY == 0) { dirX = 0; dirY = -1; }
            break;
        case VK_DOWN:
            if (dirY == 0) { dirX = 0; dirY = 1; }
            break;
        case VK_LEFT:
            if (dirX == 0) { dirX = -1; dirY = 0; }
            break;
        case VK_RIGHT:
            if (dirX == 0) { dirX = 1; dirY = 0; }
            break;
        }
        return 0;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hWnd, &ps);
        RECT rc;
        GetClientRect(hWnd, &rc);
        FillRect(hdc, &rc, (HBRUSH)(COLOR_WINDOW+1));
        // Draw snake
        for (auto &segment : snake) {
            RECT r = { segment.x * CELL_SIZE, segment.y * CELL_SIZE,
                       segment.x * CELL_SIZE + CELL_SIZE, segment.y * CELL_SIZE + CELL_SIZE };
            FillRect(hdc, &r, (HBRUSH)GetStockObject(BLACK_BRUSH));
        }
        // Draw apple
        RECT ar = { apple.x * CELL_SIZE, apple.y * CELL_SIZE,
                    apple.x * CELL_SIZE + CELL_SIZE, apple.y * CELL_SIZE + CELL_SIZE };
        FillRect(hdc, &ar, hRedBrush);
        // Game Over message
        if (gameOver) {
            const char *msg = "Game Over!";
            SetTextColor(hdc, RGB(255,0,0));
            SetBkMode(hdc, TRANSPARENT);
            DrawText(hdc, msg, -1, &rc, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
        }
        EndPaint(hWnd, &ps);
        return 0;
    }
    case WM_DESTROY:
        KillTimer(hWnd, IDT_TIMER1);
        if (hRedBrush) DeleteObject(hRedBrush);
        PostQuitMessage(0);
        return 0;
    default:
        return DefWindowProc(hWnd, message, wParam, lParam);
    }
}

// Entry point
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    WNDCLASSEX wcex = {};
    wcex.cbSize = sizeof(wcex);
    wcex.style = CS_HREDRAW | CS_VREDRAW;
    wcex.lpfnWndProc = WndProc;
    wcex.hInstance = hInstance;
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszClassName = "SnakeGameClass";

    if (!RegisterClassEx(&wcex))
        return 0;

    // Calculate window size for desired client area
    RECT rc = { 0, 0, GRID_WIDTH * CELL_SIZE, GRID_HEIGHT * CELL_SIZE };
    AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME & ~WS_MAXIMIZEBOX, FALSE);

    HWND hWnd = CreateWindow(
        "SnakeGameClass", "Win32 Snake Game",
        WS_OVERLAPPEDWINDOW & ~WS_THICKFRAME & ~WS_MAXIMIZEBOX,
        CW_USEDEFAULT, CW_USEDEFAULT,
        rc.right - rc.left, rc.bottom - rc.top,
        NULL, NULL, hInstance, NULL);

    if (!hWnd)
        return 0;

    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return (int)msg.wParam;
}
