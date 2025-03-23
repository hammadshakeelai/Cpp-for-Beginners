#include <iostream>
using namespace std;
int main() {
    int size = 4;
    string forward = "";
    string reverse = "";
    char arr[] = {'a', 'b', 'b', 'c'};
    for(int i=0;i<size;i++){
    	forward+=arr[i];
	}
    for(int i=(size-1);i>=0;i--){
    	reverse+=arr[i];
	}
    cout<<forward;
    cout<<reverse;
    return 0;
}