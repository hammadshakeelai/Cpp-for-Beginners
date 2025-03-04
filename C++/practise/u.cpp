#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<"umar"<<setw(8)<<"hmmd";
    return 0;
}
#include <iostream>
using namespace std;


//void AddNums(int,int);//function prototype /declaration

int main(){
	
	int n1,n2;
	cout<<"Enter n1: ";
	cin>>n1;
	cout<<"Enter n2: ";
	cin>>n2;
	AddNums(n1,n2);
	
	return 0;
}
void AddNums(int x,int y){
	int r = x+y;
	cout<<"The sum of "<<x<<" and "<<y<<" is "<<r;
}