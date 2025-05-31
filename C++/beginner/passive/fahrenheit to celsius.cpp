#include <iostream>
using namespace std;

int main()
{
    double F;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> F;
    double C = (F - 32) * 5.0 / 9.0;
    // F = (C * 9) / 5 + 32;
    cout << "Temperature in Celsius: " << C << endl;
   
    return 0;
}
