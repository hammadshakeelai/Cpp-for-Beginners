#include<iostream>
using namespace std;
class Animal {
    public:
        void info () {
            cout<<" :Four legged living thing with lack of consiousness.\n";
        }
};
class Cat : public Animal {
    public:
        void sound () {
            cout<<"Cat say's: Meow.\n";
        }
};
class Dog : public Animal {
    public:
        void sound () {
            cout<<"Dog say's: Woof.\n";
        }
};
int main () {
    Cat tiger;
    tiger.sound();
    tiger.info();
    
    Dog wolf;
    wolf.info();
    return 0;
}