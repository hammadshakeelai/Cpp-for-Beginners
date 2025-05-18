#include <iostream>
using namespace std;
class A{
    int a;

    public:
        //constructor
        A(int b){
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

    A obj1(9);
    cout << obj1.accessor();

    obj1.mutator(6);
    cout << obj1.accessor();

    A* emp;
    emp = new A(2);
    cout<< emp->accessor() <<endl;

    emp = new A(4);
    cout<< (*emp).accessor() <<endl;



/*

*/
    return 0;
}