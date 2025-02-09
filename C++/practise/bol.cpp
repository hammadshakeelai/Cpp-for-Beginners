#include <iostream>
using namespace std;
int main(){

    int num1,num2,num3;
    num1=1;
    num2=2;
    num3=3;
    
    bool flag = !((num1>num2)&&(num2<num3));
    cout<<"Result is "<<flag;

    return 0;
}