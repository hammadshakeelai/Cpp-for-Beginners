#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    // 2D vector (grid) example
    std::vector<int> grid = {
        1,2,3
    };
    grid.pop_back();
    std::cout << grid.back();


    return 0;
}