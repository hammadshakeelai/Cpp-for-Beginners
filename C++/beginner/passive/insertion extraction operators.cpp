#include <iostream>
using namespace std;
int main () {
    string name ;

    cout << "Enter Your First Name:  " ;
    cin >> name ;
    cout << "Your First Name is: " << name << endl;

    cout << "Enter Your Full Name:  " ;
    getline(cin >> ws, name);
    cout << "Your Full Name is: " << name << endl;
    // ws to remove any whitespace before getline or after cin
    // getline(cin, name); // This would not work correctly after a previous cin
    // getline(cin, name) reads the entire line including spaces
    // cin >> name only reads until the first whitespace
    // Using getline after cin requires ws to clear the input buffer
    // to avoid skipping the input

    

    cout << "Enter Your Full Name Again:  " ;
    getline(cin, name);
    cout << "Your Full Name Again is: " << name << endl;
    

    return 0;
}