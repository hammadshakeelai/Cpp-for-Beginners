#include <iostream>
using namespace std;
class B{
    public:
        int a;
        B(int b){
            a = b;
        }
};
class A{
    public:
        B* b;
        int a;
        A(int _a,B* _b){
            a = _a;
            b=_b;
        }
};

int main(){
    B obj2(2);

    A* Pointer_of_obj1 = new A( 4 , &obj2 );

    cout<<Pointer_of_obj1->b->a<<endl;

    return 0;
}