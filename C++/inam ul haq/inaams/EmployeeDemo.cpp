#include <iostream>
using namespace std;

class Employee
{
	private:
		string Name;
		int gSal;
		int tax_rate;
		float takeHome;
	public:
		
		void SetData(string n)
		{
			Name = n;
			cout<<"Input Gross Salary for This Empoyee : ";
			cin>>gSal;
			cout<<"Input Tax Rate : ";
			cin>>tax_rate;
		}
		
		void CalcTakeHomeSal()
		{
			takeHome = gSal - (gSal*tax_rate/100);
		}
		
		void DisplayEmpInfo()
		{
			cout<<"\n===============================\n";
			cout<<"\nEMPLOYEE NAME    : "<<Name;
			cout<<"\nGROSS SALARY     : "<<gSal;
			cout<<"\nDEDUCTION RATE   : "<<tax_rate;
			cout<<"\nTAKE HOME SALARY : "<<takeHome;
			cout<<"\n================================\n";
				
		}
		
		
		
};


int main(int argc, char** argv) 
{
	//int marks = 90;
	
	Employee Emp1, Emp2, Emp3;
	Emp1.SetData("SALEEM");
	Emp1.CalcTakeHomeSal();
	
	
	Emp2.SetData("ABEERA");
	Emp2.CalcTakeHomeSal();
		
	Emp3.SetData("SALEH");
	Emp3.CalcTakeHomeSal();
	
	
	
	cout<<"\nEMPLOYEE-1\n";
	Emp1.DisplayEmpInfo();
	cout<<"\nEMPLOYEE-2\n";
	Emp2.DisplayEmpInfo();
	cout<<"\nEMPLOYEE-3\n";
	Emp3.DisplayEmpInfo();
	
	return 0;
}