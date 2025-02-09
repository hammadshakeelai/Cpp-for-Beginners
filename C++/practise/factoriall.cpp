#include <iostream>
using namespace std;
int main (){
	int n = 0;
	int answer = 1;
	for (int i=2 ; i<=n ; i++){
			answer*=i;
	}
    cout<<"factorial of "<<n<<" is "<<answer;

    return 0;
}
// #include <iostream>
// using namespace std;
// int main (){
// 	for (int j=0; j<=10; j++){
// 		int answer = 1;
// 		for (int i=2 ; i<=j ; i++){
// 				answer*=i;
// 		}
// 		cout<<"factorial of "<<j<<" is "<<answer<<endl;
// 	}
//     return 0;
// }