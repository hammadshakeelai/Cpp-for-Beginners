#include <iostream>
using namespace std;

char grader(int a){
    if (90<a){
    return 'A';}
    else if(80<a){
    return 'B';}
    else if (70<a){
    return 'C';}
    else if (60<a){
    return 'D';}
    else{
    return 'F';}
}
int percentage(int a, int b,int c){
    return ((a+b+c)/3) ;
}// Function declaration with default parameter

int main() {
    int a,b,c;
    cout << "Please enter a marks for first subject: " ;
    cin >> a;
    cout << "Please enter a marks for second subject: " ;
    cin >> b;
    cout << "Please enter a marks for third subject: " ;
    cin >> c;
    cout << "your percentage is : " <<percentage(a,b,c) << "\n";
    int u=percentage(a,b,c);
    cout << "your grade is : " << grader(u) << endl;
    return 0;
}