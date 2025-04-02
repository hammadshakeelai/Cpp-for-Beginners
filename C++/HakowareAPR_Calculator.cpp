#include <iostream>
using namespace std;

int main() {
	int time = 0;
	float auralvl,dltdmg;
	cout<<"Enter your Aura level: ";
	cin>>auralvl;
	while(auralvl<10){
		cout<<"Too small amount, Try again...\nEnter your Aura level: ";
		cin>>auralvl;
	}
	cout<<"Enter Dealt Damage: ";
	cin>>dltdmg;
	while(dltdmg<=0){
		cout<<"Too small amount, Try again...\nEnter Dealt Damage: ";
		cin>>dltdmg;
	}
	do{
		dltdmg*=1.1;
		//cout<<dltdmg<<endl;//to test if true--coz i cant believe my own results like damn
		time+=10;
	}while(auralvl>dltdmg);
	int seconds,minutes,hours,days,years;
	years=(time/31536000);
	time%=31536000;
	days=(time/86400);
	time%=86400;
	hours=(time/3600);
	time%=3600;
	minutes=(time/60);
	time%=60;
	seconds=time;
	cout<<"Bankruptcy took "<<years<<" years, "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, and "<<seconds<<" seconds.\n";
	cout<<years<<":"<<days<<":"<<hours<<":"<<minutes<<":"<<seconds;
    return 0;
}
