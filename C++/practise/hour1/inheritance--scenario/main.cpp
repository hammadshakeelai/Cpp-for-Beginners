#include <iostream>
using namespace std;
class Date{
	
	int day,month,year;
	
	public:
		Date(){
			day=1;
			month=1;
			year=1900;
		}
		Date(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		void setDate(int d,int m,int y){
			day=d;
			month=m;
			year=y;
		}
		void displayDate(){
			cout<<day<<"/"<<month<<"/"<<year;
		}
};
class Employee{
	private:
		int employeeNumber;
 		Date HireDate;
	public:
		string name;
		
		Employee(){
			name="unknown";
			employeeNumber=0;
			HireDate.setDate(0,0,0);	
		}
		Employee(string n,int e,int d,int m,int y){
			name=n;
			employeeNumber=e;
			HireDate.setDate(d,m,y);	
		}
		void displayEmployee(){
			cout<<"Name: "<<name<<endl;
			cout<<"Employee Number: "<<employeeNumber<<endl;
			cout<<"Hire Date: ";HireDate.displayDate();cout<<endl;
			
		}
};
class ProductionWorker: public Employee{
	private:
		double HourlyPayRate;
	public:
		int Shift;

		ProductionWorker():Employee("unknown",0,1,1,1900){
			HourlyPayRate = 0.0;
			Shift = 1;
		}
		ProductionWorker(double h,int s,string n,int e,int d,int m,int y):Employee(n,e,d,m,y){
			HourlyPayRate = h;
			Shift = s;
		}
		void setShift(int s){
			Shift = s;
		}
		void updateRate(double r){
			HourlyPayRate = r;
		}
		double getRate(){
			return HourlyPayRate;
		}
		void displayShift(){
			if(Shift==1){
				cout<<"you have day shift.\n";
			}
			else if(Shift==2){
				cout<<"you have night shift.\n";
			}
		}
};
class ShiftSupervisor: public Employee{
	
	int annualSalary;
	int annualSalaryBonus;
	
	public:
		ShiftSupervisor(){
			annualSalary = 0;
			annualSalaryBonus = 0;
		}
		ShiftSupervisor(int as,int asb,string n,int e,int d,int m,int y):Employee(n,e,d,m,y){
			annualSalary = as;
			annualSalaryBonus = asb;
		}
		void setSalary(int s){
			annualSalary = s;
		}
		void setBonus(int b){
			annualSalaryBonus = b;
		}
		int getSalary(){
			return annualSalary;
		} 
		int getBonus(){
			return annualSalaryBonus;
		}
		void displaySalary(){
			cout<<"Employee Annual Salary: "<<annualSalary<<endl;
		}
		void displaySalaryBonus(){
			cout<<"Employee Annual Salary Bonus: "<<annualSalaryBonus<<endl;
		}
};
class TeamLeader: public ProductionWorker{
	int monthlyBonus;
	int requiredNumberOfTrainingHours = 180;
	int trainingHours;
	public:
		TeamLeader(){
			monthlyBonus = 0;
			trainingHours = 0;
		}
		TeamLeader(int mb,int th,double h,int s,string n,int e,int d,int m,int y):ProductionWorker(h,s,n,e,d,m,y){
			monthlyBonus = mb;
			trainingHours = th;
		}
		void setTrainingHours(int h){
			trainingHours = h;
		}
		void setBonus(int b){
			monthlyBonus = b;
		}
		int getBonus(){
			return monthlyBonus;
		}
		int getHours(){
			return trainingHours;
		}
		void isEligibleForBonus(){
			if(requiredNumberOfTrainingHours>trainingHours){
				cout<<"You are not Eligible for Bonus.\n";
			}
			else{
				cout<<"You are Eligible for Bonus.\n";
			}
		}
		void increaseTrainingHoursBy(int h){
			trainingHours+=h;
		}
};
int main() {
	Date holiday(22,6,2019);
	holiday.displayDate();

	Employee gaurd("faraz",11021,18,5,2025);
	gaurd.displayEmployee();

	ProductionWorker mazdor(22.5,1,"dughan",99,8,3,2024);
	mazdor.displayEmployee();
	mazdor.displayShift();

	ShiftSupervisor saib(1200000,150000,"saqib",1001,19,12,2002);
	saib.displayEmployee();
	saib.displaySalary();
	saib.displaySalaryBonus();

	TeamLeader ik(1000000,200,500,1,"imran khan",1,9,12,1995);
	ik.displayEmployee();
	ik.isEligibleForBonus();
	ik.increaseTrainingHoursBy(30);
	cout<<(ik.getHours())<<endl;
	ik.displayShift();
	ik.setBonus(2000000000);
	cout << ik.getBonus()<<endl;

	return 0;
}