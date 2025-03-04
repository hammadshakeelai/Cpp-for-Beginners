#include <iostream>
using namespace std;

void myFunction(string fname, int age, char gender)
{
    cout << fname << " Khan, " << age << " years old gender " << gender << endl;
}

int main() 
{
    myFunction("Ali", 35, 'M');
    myFunction("Anum", 28, 'F');
    return 0;
}