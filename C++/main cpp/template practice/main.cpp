#include <iostream>
using namespace std;

template<typename T>
void print_default() {
    T a = 0;
    cout << a << endl;
}

int main () {
    print_default<int>();
    return 0;
}
