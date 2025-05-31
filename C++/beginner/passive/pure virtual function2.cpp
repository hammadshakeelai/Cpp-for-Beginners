#include <iostream>
#include <string>
using namespace std;

class Printer
{
public:
    virtual string getClassName() = 0;
    // virtual ~Printer() = default;
};

class Entity : public Printer
{
public:
    string getClassName() override { return "Entity"; }
};

class Player : public Entity
{
public:
    string getClassName() override { return "Player"; }
};

void printClass(Printer* obj)
{
    cout << "Class = " << obj->getClassName() << endl;
}

int main()
{
    Entity* ep = new Player();
    printClass(ep); 

    ep = new Entity();
    printClass(ep);

    return 0;
}
