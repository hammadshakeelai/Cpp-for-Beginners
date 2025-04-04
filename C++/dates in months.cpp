#include <iostream>
#include <string>
using namespace std;
int daysInMonth(string month, bool leapyear)
{
	if (month=="February")
	{
		if (leapyear)
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	else if(month=="April"     ||month=="June" ||
			month=="September" ||month=="November")
	{
		return 30;
	}
	else
	{
		return 31;
	}
}

bool isLeapYear(int year)
{
	if(year%400==0)
	{
		return 1;
	}
	else if(year%100==0)
	{
		return 0;
	}
	else if(year%4==0)
	{
		return 1;
	}
	return 0;
}

int main() {

	string months[]={
					"January","February","March"    ,
					"April"  ,"May"     ,"June"     ,
					"July"   ,"August"  ,"September",
					"October","November","December"
					};
//	for(string month: months){ //prints months line by line 
//		cout<<month<<endl;
//	}
//	for(string month: months){ //prints days in months line by line
//		cout<<daysInMonth(month,0)<<endl;
//	}
//	for(string month: months){ //prints all the dates with st nd rd th in all months line by line
//		for(int i=1;i<=daysInMonth(month,0);i++){//the 0 is bool for not a leap year
//			if(i%10==1 && i!=11){
//				cout<<i<<"st of "<<month<<endl;
//			}
//			else if(i%10==2 && i!=12){
//				cout<<i<<"nd of "<<month<<endl;
//			}
//			else if(i%10==3 && i!=13){
//				cout<<i<<"rd of "<<month<<endl;
//			}
//			else{
//				cout<<i<<"th of "<<month<<endl;
//			}
//		}
//		cout<<endl;
//	}

int days;
bool ifleapyear;
int startyear=1990,endyear=2027;

for(int j=startyear;j<=endyear;j++)
{	
	cout<<" year "<<j<<endl;
	ifleapyear=isLeapYear(j);
	
	for(string month: months)
	{
		days=daysInMonth(month,ifleapyear);
		
		for(int i=1;i<=days;i++)
		{
			if(i%10==1 && i!=11)
			{
				cout<<i<<"st of "<<month<<endl;
			}
			else if(i%10==2 && i!=12)
			{
				cout<<i<<"nd of "<<month<<endl;
			}
			else if(i%10==3 && i!=13)
			{
				cout<<i<<"rd of "<<month<<endl;
			}
			else
			{
				cout<<i<<"th of "<<month<<endl;
			}
		}
		cout<<endl;
	}
}

	return 0;
}