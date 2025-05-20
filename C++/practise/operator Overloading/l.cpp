// virtual_example.cpp
// Simple C++ program demonstrating virtual and pure virtual functions

#include <iostream>
#include <vector>
using namespace std;

// Base class with a pure virtual function
class Animal {
public:
    virtual void makeSound() = 0; // Pure virtual function (must be implemented by derived class)

    virtual void move() {         // Virtual function (can be overridden but not mandatory)
        cout << "Animal moves in its own way." << endl;
    }

    virtual ~Animal() {} // Always make base class destructors virtual when using polymorphism
};

// Derived class 1
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Dog barks!" << endl;
    }

    void move() override {
        cout << "Dog runs on 4 legs." << endl;
    }
};

// Derived class 2
class Bird : public Animal {
public:
    void makeSound() override {
        cout << "Bird chirps!" << endl;
    }

    void move() override {
        cout << "Bird flies in the sky." << endl;
    }
};

int main() {
    // We use a vector of Animal pointers (polymorphism)
    vector<Animal*> animals;

    animals.push_back(new Dog());
    animals.push_back(new Bird());

    for (Animal* a : animals) {
        a->makeSound(); // Calls the correct overridden function
        a->move();      // Also calls the overridden move function
        cout << "---" << endl;
    }

    // Clean up memory
    for (Animal* a : animals) {
        delete a;
    }

// Animal *animal[]={
//     new Animal("fish"),
//     new Animal("shark"),
//     new Animal("dog"),
//     new Animal("bird"),
//     new Animal("doremon")
// }

    return 0;
}

/*
OUTPUT:
Dog barks!
Dog runs on 4 legs.
---
Bird chirps!
Bird flies in the sky.
---
*/

/*
Explanation:
- Animal is an abstract class because it has a pure virtual function.
- Dog and Bird inherit from Animal and implement makeSound().
- Polymorphism allows calling the correct function at runtime using base class pointers.
- This is useful for designing flexible and extensible programs.
*/
