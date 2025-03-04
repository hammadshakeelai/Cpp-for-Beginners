#include <iostream>

using namespace std;

void cVisited(string country = "Pakistan") {
    cout << country << "\n";
}

int main() {
    cVisited("Sweden");
    cVisited("UK");
    cVisited();
    cVisited("USA");

    return 0;
}