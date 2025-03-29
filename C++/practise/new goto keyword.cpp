#include <iostream>
using namespace std;

int main() {
    bool raned = false , run = false;
    
    start: 
    
    if (run) {
    	cout<<"hi i m doremon ";
    	raned = run;
	}
	
	run = true;
	if (raned) {
		return 0;
	}
	goto start;
}
