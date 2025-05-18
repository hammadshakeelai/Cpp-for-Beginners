#include <iostream>
using namespace std;
class A{

    //private:
    int a;

    public:
        //constructor
        A(){
            a=0;
        }
        A(int b = 0){
            a = b;
        }
        //mutator
        void mutator(int b){
            a=b;
        }
        //accessor
        int accessor(){
            return a;
        }
};
int main(){

    A obj1;
    cout << obj1.accessor();

    A obj2();
    cout << obj1.accessor();

    A obj3(8);
    cout << obj1.accessor();

    obj1.mutator(6);
    cout << obj1.accessor();

/*
0
6
*/
    return 0;
}