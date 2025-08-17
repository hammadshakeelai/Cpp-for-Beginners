#include <iostream>
using namespace std;

template <typename T>
template <typename U>

T add(T a, U b) {
    return a + b;
}
U add(T a, U b) {
    return a + b;
}

int main () {
    cout << add(5, 10.5) << endl;        // Integer Floating-point addition
    cout << add(5.5, 10) << endl;    // Floating-point Integer addition
    return 0;
}
