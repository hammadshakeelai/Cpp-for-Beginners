#include<iostream>
using namespace std;
class Entity 
{
    public:
        virtual string getName() = 0;

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

    ep = new Player("ronaldo");
    printName(ep);

    return 0;
}