#include <iostream>
using namespace std;
int main (){

    int lnum,unum;
    cout<<"Enter Starting Point Value: ";
    cin>>lnum;
    cout<<"Enter Ending Point Value: ";
    cin>>unum;
    while (lnum > unum) {
        cout<<"Enter Starting Point Value: ";
        cin>>lnum;
        cout<<"Enter Ending Point Value: ";
        cin>>unum;
    }

    for (int i = lnum; i <= unum; i++){
        bool prime = true;
        for(int j = 2; j<i; j++){
            if (i%j==0){
                prime = false;
            }
        }
        if (prime){
            cout<< "\n"<<i<<" is a prime number.";
        }
    }

    return 0;
}