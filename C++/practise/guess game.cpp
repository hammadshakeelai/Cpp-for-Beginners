#include <iostream>
#include <ctime>
using namespace std;
int main () {
	int randomNum,guess,counter;
	counter=0;
	srand(time(0));
	for(int i=0; i<1;i++){
	
		randomNum = rand() % 20;
		cout<<randomNum<<endl;
	}
	int flag =0;
	do{
		if (flag){
			if(guess<randomNum){
				cout<<"Guess To Low."<<endl;
			}else{
				cout<<"Guess Too High."<<endl;
			}
			cout<<"Wrong Guess!...Try Again."<<endl;
			cout<<"Guess The Random Number: ";
			
		}else{
			flag++;
			cout<<"Guess the Random Number I Guessed: ";
		}
		cin>>guess;
		counter++;
		
	}while(guess!=randomNum);
	cout<<"Well Done You Guess Correctly The Number Was "<<randomNum<<endl;
	cout<<"You've Done it in "<<counter<<" Turns.";
return 0;
}