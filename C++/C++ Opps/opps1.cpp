#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string name;
    string price = "0";  // Default price is 0 as a string, but you can use an integer if needed.
    
    void showprice() {
        cout << "Car price is " << price << endl;
    }
    
    void str() {
        cout << "Car name is " << name << endl;
        cout << "Car price is " << price << endl;
    }
    
    void changeName(string newname) {
        name = newname;
    }
    
    void inputName() {
        string inputname;
        cout << "Enter new name: ";
        cin >> inputname;
        name = inputname;
    }
};

int main() {
    Car jilani;
    jilani.name = "bharwa";
    jilani.price = "2 taka";
    jilani.str();
    
    jilani.showprice();
    
    jilani.changeName("chutiya");
    jilani.str(); 
    
    jilani.inputName();
    jilani.str();  // Fixed the typo here: added the closing parenthesis.
    
    return 0;
}
