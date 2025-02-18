#include <iostream>
#include <ctime>
using namespace std;
int main () {
	int randomNum,guess,counter;
	counter=0;
	srand(time(0));
	
	randomNum = rand() % 20;
	cout<<randomNum<<endl;
	cout<<"You have 5 Lives"<<endl;
	for(int i=5; i!=0; i--){
		cout<<"Guess Random Number For "<<2*i<<" Points: ";
		cin>>guess;
		counter++;
		if (guess==randomNum){
			cout<<"Well Done You Guess Correctly The Number Was "<<randomNum<<endl;
			cout<<"You've Done it in "<<counter<<" Turns";
			cout<<" And Scored "<<2*i<<" Points.";
			break;
		}
		else if(guess<randomNum){
			cout<<"Guess was Too Low"<<endl;
			
		}
		else{
			cout<<"Guess was Too High"<<endl;
		}
		if(i==1){
			cout<<"You Ran out of lives, You've the Lost The Game.";
			break;
		}
		cout<<"You have "<<i-1<<" Lives Left."<<endl;
	}
	return 0;
}