#include <iostream>
#include <ctime>
using namespace std;
int main(){

    int randomNum;
	srand(time(0));
	for(int i=0; i<10;i++){
	
		randomNum = rand() % 20;
		cout<<randomNum<<endl;
	}

    return 0;
}