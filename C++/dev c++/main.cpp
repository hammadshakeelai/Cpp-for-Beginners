#include<iostream>
#include<string>
using namespace std;
int main () {

float rainfall[12];
string month;
for(int i=0; i<12; i++){
	switch(i){
		case 0:
			month="january";
			break;
		case 1:
			month="feburary";
			break;
		case 2:
			month="march";
			break;
		case 3:
			month="april";
			break;
		case 4:
			month="may";
			break;
		case 5:
			month="june";
			break;
		case 6:
			month="july";
			break;
		case 7:
			month="august";
			break;
		case 8:
			month="september";
			break;
		case 9:
			month="october";
			break;
		case 10:
			month="november";
			break;
		case 11:
			month="december";
			break;
	}
	cout<<"Enter Average Rainfall in "<<month<<": ";
	cin>>rainfall[i];
}
float q1,q2,q3,q4,t,avg;
t=0;
for(int i=0; i<12; i++){
	t+=(rainfall[i]);
	if (i<3){
		q1+=(rainfall[i]);
	}
	else if (i<6){
		q2+=(rainfall[i]);
	}
	else if (i<9){
		q3+=(rainfall[i]);
	}
	else {
		q4+=(rainfall[i]);
	}
}
cout<<"Average Rainfall In The Year Was "<<t/12<<" mm."<<endl;
cout<<"Total Rainfall In The First Quater Of Year Was "<<q1<<" mm. Average Rainfall Was "<<q1/3<<" mm."<<endl;
cout<<"Total Rainfall In The First Quater Of Year Was "<<q2<<" mm. Average Rainfall Was "<<q2/3<<" mm."<<endl;
cout<<"Total Rainfall In The First Quater Of Year Was "<<q3<<" mm. Average Rainfall Was "<<q3/3<<" mm."<<endl;
cout<<"Total Rainfall In The First Quater Of Year Was "<<q4<<" mm. Average Rainfall Was "<<q4/3<<" mm."<<endl;
int high,low;
high=0;
low=0;
for (int i=0; i<11; i++){
	if(rainfall[i]<rainfall[i+1])
	{
		high=(i+1);
	}
	if(rainfall[i]>rainfall[i+1])
	{
		low=(i+1);
	}
}
cout<<"Lowest rainfall months is "<<low;
cout<<"height rainfall months is "<<high;

	return 0;
}