#include <iostream>
using namespace std;
int main(){

    int startday,presentdate;
    cout<<"Enter a Number between 0-6: ";
    cin>>startday;
    while (startday<0 || startday>6){
        cout<<"Invalid Input, Kindly Enter A Value from 0-6 : ";
        cin>>startday;
    }
    cout<<"Enter a Number between 1-366: ";
    cin>>presentdate;
    while (presentdate<1 || presentdate>366){
        cout<<"Invalid Input, Kindly Enter A Value from 1-366 : ";
        cin>>presentdate;
    }
    int result;
    result = (startday + presentdate - 1)%7;
    switch(result){
        case 0:
            cout<<"Sunday";
            break;
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        default:
            cout<<"done";
            break;
    }
    return 0;

}