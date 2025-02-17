#include <iostream>
using namespace std;
int main(){
	for(int i = 0; i<24; i++)
		for(int j = 0; j<60; j++)
			for(int k = 0; k<60; k+=8)
				cout<<i<<":"<<j<<":"<<k<<endl;
	return 0;
}