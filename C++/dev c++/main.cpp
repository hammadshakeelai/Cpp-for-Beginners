#include <iostream>
using namespace std;

int main(int n=0) {
    if(n==10){
    	return 0;
	}
    cout<<"hello world\n";
    main(n+1);
}
