#include "raylib.h"
#include "raygui.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

//---------------------------//
//      GUI Input Helper    //
//---------------------------//
static std::string GuiTextInput(Rectangle bounds, const std::string& text) {
    static char buffer[64];
    memset(buffer, 0, sizeof(buffer));
    strncpy(buffer, text.c_str(), sizeof(buffer) - 1);
    GuiTextBox(bounds, buffer, sizeof(buffer), true);
    return std::string(buffer);
}

//---------------------------//
//       Weapon Class       //
//---------------------------//
class Weapon {
public:
    std::string name;
    int baseDamage, luckyMin, luckyMax;
    Weapon(const std::string& n, int d, int lmin, int lmax)
        : name(n), baseDamage(d), luckyMin(lmin), luckyMax(lmax) {
    }
    int attack(bool isLucky) const {
        return isLucky ? luckyMin + rand() % (luckyMax - luckyMin + 1) : baseDamage;
    }
};

//---------------------------//
//     Character Class      //
//---------------------------//
class Character {
public:
    std::string name;
    int health;
    Weapon* weapon;
    Character(const std::string& n, int h, Weapon* w)
        : name(n), health(h), weapon(w) {
    }
    virtual int attack(bool lucky) const { return weapon->attack(lucky); }
    void takeDamage(int dmg) { health = std::max(0, health - dmg); }
};

//---------------------------//
//       Player Class       //
//---------------------------//
class Player : public Character {
public:
    bool isLucky;
    int position;
    int potions;
    int money;
    Player(const std::string& n, int h, Weapon* w, bool l)
        : Character(n, h, w), isLucky(l), position(0), potions(0), money(500) {
    }
    void heal() { if (potions > 0 && health < 100) { health = std::min(100, health + 30); --potions; } }
};

//---------------------------//
//       Enemy Class        //
//---------------------------//
class Enemy : public Character {
public:
    Enemy(const std::string& n, int h, Weapon* w) :Character(n, h, w) {}
};

//---------------------------//
//         Die Class        //
//---------------------------//
class Die { public: int roll() const { return 1 + rand() % 6; } };

                  //---------------------------//
                  //     Property Class       //
                  //---------------------------//
                  class Property {
                  public:
                      std::string name;
                      int cost;
                      Player* owner;
                      Property(const std::string& n, int c) :name(n), cost(c), owner(nullptr) {}
                  };

                  //---------------------------//
                  //      TicTacToe Class     //
                  //---------------------------//
                  class TicTacToe {
                  public:
                      enum Cell { NONE, X, O };
                      Cell board[3][3];
                      Cell turn;
                      bool gameOver;
                      TicTacToe() { reset(); }
                      void reset() { for (int i = 0; i < 3; i++)for (int j = 0; j < 3; j++)board[i][j] = NONE; turn = X; gameOver = false; }
                      void update() {
                          if (gameOver) return;
                          for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) {
                              Rectangle r = { 100 + 120 * j,100 + 120 * i,100,100 };
                              const char* label = board[i][j] == NONE ? (turn == X ? "X" : "O") : (board[i][j] == X ? "X" : "O");
                              if (GuiButton(r, label)) {
                                  if (board[i][j] == NONE) { board[i][j] = turn; checkWin(); turn = (turn == X ? O : X); }
                              }
                          }
                          if (GuiButton({ 100,450,200,40 }, "Reset TTT")) reset();
                      }
                      void draw() const { DrawText("TicTacToe", 100, 60, 30, WHITE); }
                  private:
                      void checkWin() {
                          for (int i = 0; i < 3; i++) if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != NONE) gameOver = true;
                          for (int j = 0; j < 3; j++) if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != NONE) gameOver = true;
                          if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != NONE) gameOver = true;
                          if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != NONE) gameOver = true;
                      }
                  };

                  //---------------------------//
                  //     BattleArena Class    //
                  //---------------------------//
                  class BattleArena {
                  public:
                      Player* player;
                      Enemy* enemy;
                      bool active;
                      int choice;
                      BattleArena() :player(nullptr), enemy(nullptr), active(false), choice(0) {}
                      void startBattle(Player& p, Enemy& e) { player = &p; enemy = &e; active = true; choice = 0; }
                      void update() {
                          if (!active) return;
                          if (IsKeyPressed(KEY_ONE)) choice = 1;
                          if (IsKeyPressed(KEY_TWO)) choice = 2;
                          if (choice) {
                              if (choice == 1) { int dmg = player->attack(player->isLucky); enemy->takeDamage(dmg); }
                              else { int chance = rand() % 100, dmg = enemy->attack(false); if (chance < 50) dmg /= 2; player->takeDamage(dmg); }
                              if (enemy->health > 0 && choice == 1) { int dmg = enemy->attack(false); player->takeDamage(dmg); }
                              active = false;
                          }
                      }
                      void draw() const { if (!active) return; DrawText("Battle: [1]Attack  [2]Evade", 50, 150, 20, WHITE); }
                  };

                  int main() {
                      srand((unsigned)time(NULL));
                      const int screenW = 1024, screenH = 768;
                      InitWindow(screenW, screenH, "Adventure GUI");
                      SetTargetFPS(60);

                      Texture2D bg = LoadTexture("resources/dungeon.png");
                      Die die; BattleArena arena; TicTacToe ttt;
                      Weapon sword("Sword", 10, 5, 20), axe("Axe", 12, 6, 22);
                      std::vector<Enemy> enemies = { Enemy("Goblin",50,&sword), Enemy("Orc",80,&axe) };
                      std::vector<Property> properties;
                      for (int i = 0; i < 30; i++) properties.emplace_back("Prop" + std::to_string(i), 100 + i * 10);

                      // Grid settings
                      const int cols = 8, rows = 6, cellSize = 64;
                      const int gridW = cols * cellSize, gridH = rows * cellSize;
                      const int offsetX = (screenW - gridW) / 2, offsetY = (screenH - gridH) / 2;

                      int lastRoll = 0, stepsToMove = 0;
                      bool isMoving = false;
                      int frameCounter = 0, framesPerMove = 6;
                      std::vector<int> potionSpawns;
                      for (int i = 5; i < properties.size(); i += 5) potionSpawns.push_back(i);

                      enum Screen { MENU, DUNGEON, TICTACTOE, EXIT } screen = MENU;
                      std::string playerName = "";
                      bool nameOk = false;
                      Player* player = nullptr;

                      while (!WindowShouldClose()) {
                          // --- Input Logic ---
                          if (screen == MENU) {
                              playerName = GuiTextInput({ screenW / 2 - 150, 200, 300, 30 }, playerName);
                              nameOk = !playerName.empty();
                              if (GuiButton({ screenW / 2 - 100, 260, 200, 40 }, "Start Dungeon") && nameOk) {
                                  player = new Player(playerName, 100, &sword, true);
                                  screen = DUNGEON;
                              }
                              if (GuiButton({ screenW / 2 - 100, 320, 200, 40 }, "Play TicTacToe")) {
                                  ttt.reset(); screen = TICTACTOE;
                              }
                              if (GuiButton({ screenW / 2 - 100, 380, 200, 40 }, "Exit")) screen = EXIT;
                          }
                          else if (screen == DUNGEON) {
                              // Roll & movement
                              if (!isMoving) {
                                  if (GuiButton({ screenW / 2 - 80, 520, 160, 40 }, "Roll Dice")) {
                                      lastRoll = die.roll(); stepsToMove = lastRoll;
                                      isMoving = true; frameCounter = framesPerMove;
                                  }
                              }
                              else {
                                  frameCounter--;
                                  if (frameCounter <= 0) {
                                      if (stepsToMove > 0) {
                                          player->position = std::min(player->position + 1, cols * rows - 1);
                                          stepsToMove--;
                                          if (std::find(potionSpawns.begin(), potionSpawns.end(), player->position) != potionSpawns.end()) player->potions++;
                                          if (player->position < properties.size()) {
                                              Property& p = properties[player->position];
                                              if (p.owner == nullptr) {
                                                  std::string btn = "Buy " + p.name + " $" + std::to_string(p.cost);
                                                  if (GuiButton({ 50,700,200,40 }, btn.c_str())) {
                                                      if (player->money >= p.cost) { player->money -= p.cost; p.owner = player; }
                                                  }
                                              }
                                          }
                                      }
                                      else {
                                          isMoving = false;
                                          if (player->position % 4 == 0) {
                                              Enemy e = enemies[rand() % enemies.size()]; arena.startBattle(*player, e);
                                          }
                                      }
                                      frameCounter = framesPerMove;
                                  }
                              }
                              arena.update();
                              if (GuiButton({ 50,740,200,40 }, "Back to Menu")) screen = MENU;
                          }
                          else if (screen == TICTACTOE) {
                              ttt.update();
                              if (GuiButton({ screenW / 2 - 100, 700, 200, 40 }, "Back to Menu")) screen = MENU;
                          }
                          else if (screen == EXIT) break;

                          // --- Drawing ---
                          BeginDrawing(); ClearBackground(BLACK);
                          DrawTextureEx(bg, { 0,0 }, 0, (float)screenW / bg.width, WHITE);
                          if (screen == MENU) {
                              DrawText("Enter your name:", screenW / 2 - 100, 160, 20, WHITE);
                          }
                          else if (screen == DUNGEON) {
                              // Grid overlay
                              for (int x = 0; x <= cols; x++) DrawLine(offsetX + x * cellSize, offsetY, offsetX + x * cellSize, offsetY + gridH, LIGHTGRAY);
                              for (int y = 0; y <= rows; y++) DrawLine(offsetX, offsetY + y * cellSize, offsetX + gridW, offsetY + y * cellSize, LIGHTGRAY);
                              // Character piece
                              int cx = player->position % cols, cy = player->position / cols;
                              DrawCircle(offsetX + cx * cellSize + cellSize / 2, offsetY + cy * cellSize + cellSize / 2, cellSize * 0.3f, RED);
                              // HUD
                              DrawText(TextFormat("HP: %d", player->health), 20, 20, 20, WHITE);
                              DrawText(TextFormat("Potions: %d", player->potions), 20, 50, 20, ORANGE);
                              DrawText(TextFormat("Money: $%d", player->money), 20, 80, 20, GOLD);
                              DrawText(TextFormat("Last Roll: %d", lastRoll), screenW / 2 - 60, 460, 20, YELLOW);
                              arena.draw();
                          }
                          else if (screen == TICTACTOE) { ttt.draw(); }
                          EndDrawing();
                      }

                      UnloadTexture(bg);
                      CloseWindow();
                      return 0;
                  }
