#include<iostream>
using namespace std;
int main(){
    string number = "42456789";
    // int num = stoi(number); // The number is: 42
    int num = 0;
    for (char ch : number){
        num *= 10;
        num += ( ch -48);
    }
    cout <<num << endl;
    // cout << "(48 == '0') === "  << (48 == '0') << endl; // (48 == '0') === 1
    return 0;
}
