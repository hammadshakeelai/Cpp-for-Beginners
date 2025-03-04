#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int salary;
	int years;
	bool loan;
	
	cout<<"\nWelcome to Loan Eligibility App";
	cout<<"\n--------------------------------";
	cout<<"\n\nEnter Your Years of Service : ";
	cin>>years;
	cout<<"Enter Your Current Salarya  : ";
	cin>>salary;
	cout<<"Have You Availed The Loan Before (Yes=1, No=0) : ";
	cin>>loan;
	
	if(loan == 0)
	{
		if(years >= 5)
		{
			if(salary < 100000)
			{
				cout<<"\nCongratulations! You are Eligible For the Loan";
			}
			else
			{
				cout<<"\nYou are Not Eligible! \nYour are taking Enough Salary";
			}
		}
		else
		{
			cout<<"\nYour are Not Eligible! \n Your Service Years are not Enough!";
		}
			
	}
	else
	{
		cout<<"\nYou are Not Eligible! \n You have taken the Loan Before!";
	}
	
	
	return 0;
}