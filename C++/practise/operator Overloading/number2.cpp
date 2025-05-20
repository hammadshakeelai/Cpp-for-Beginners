#include <iostream>
using namespace std;
class Number{
    int value;

    public:
        Number () {
            value = 0;
        }
        Number (int val) {
            value = val;
        }
        void display();
};
void Number::display () {
    cout << value;
}
friend void Number::setValue(int val){
    value = val;
}

int main () {

    Number numA (4);
    numA.setValue(5);
    numA.display();

    return 0;
}