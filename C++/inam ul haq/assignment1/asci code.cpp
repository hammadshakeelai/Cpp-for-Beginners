#include <iostream>
using namespace std;
int main() {
	char CH;
	cout<<"char\tcode\n";
	for( int i = 0 ; i <= 255 ; i++ ){
	CH = i;
	cout<<CH<<"\t"<<i<<"\n";
	}
	return 0;
}