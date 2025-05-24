#include <iostream>

int main(){
    // double num = 345679222.14345674567;//3.45679e+08
    // double num = (int)567.14345674567;//567
    // double num = (float)324567.14345674567;//324567
    // double num = (float)34567.14345674567;//34567.1
    // double num = (float)567.14345674567;//567.143
    // double num = (float)7.14345674567;//7.14346
    // double num = (float)0.14345674567;//0.143467
    // std::cout<<num<<std::endl;


    for(int i = 0; i <= 127; i++){
        std::cout<<i<<" "<<(char)i<<std::endl;
    }
    return 0;
}