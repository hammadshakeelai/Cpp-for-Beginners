#include <iostream>
using namespace std;
int main () {
	
	for ( int subject =1; subject<=3 ; subject++){
		for(int quiz=1;quiz<=3;quiz++){
			for ( int student = 1; student <=3; student++){
				cout<<"enter marks of students "<<student<<" for subject "<<subject<<" for quiz No. "<<quiz<<": ";
				int marks;
				cin>>marks;
			}
		}
	}
	
	return 0;
}