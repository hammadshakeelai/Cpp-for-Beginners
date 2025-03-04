#include <iostream>
using namespace std;

int sum(int i, int k = 0); // Function declaration with default parameter

int main() {
    int a, b, c;
    
    cout << "Please enter a value for variable a: " << endl;
    cin >> a;
    
    cout << "Please enter a value for variable b: " << endl;
    cin >> b;

    c = sum(a);
    cout << "Result with default parameter: " << c << endl;
    
    c = sum(a, b);
    cout << "Result with provided parameters: " << c << endl;

    return 0;
}

int sum(int i, int k) {
    return i + k;
}