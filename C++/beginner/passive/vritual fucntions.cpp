#include<iostream>
using namespace std;
class Entity 
{
    public:
        virtual string getName()
        {
            return "Entity";
        }

};
class Player : public Entity 
{
    private:
        string m_name;
    public: 
        Player(const string& name) : m_name(name) {}

        string getName () override 
        {
            return m_name;
        }
};
void printName(Entity* entity)
{
    cout << "Name = " << entity->getName() << endl;
}
int main () 
{
    Entity* ep;

    // Entity one;
    // Player two("2");

    // ep = &one;
    // printName(ep);

    // ep = &two;
    // printName(ep);

    // printName(&one);
    // printName(&two);
    
    ep = new Entity();
    printName(ep);

    return 0;
}