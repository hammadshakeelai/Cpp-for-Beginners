#include <iostream>
using namespace std;
class Number {
    int value;

public:
    Number() : value(0) { }
    Number(int val) : value(val) { }

    friend void setValue(Number &n, int val);
    void display() const;
};
void setValue(Number &n, int val) {
    n.value = val;
}
void Number::display() const {
    cout << value;
}
int main() {
    Number numA(4);
    setValue(numA, 5);
    numA.display();
    return 0;
}