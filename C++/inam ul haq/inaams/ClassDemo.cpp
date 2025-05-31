#include <iostream>
#include <string>
using namespace std;

class student
{
	private:
	
		int marks;
		float gpa;
		
	public:
		string name;
		student()
		{
			name = "XYZ";
			marks = 0;
			gpa = 0.0;
		}
		
		student(string n, int m, float g)
		{
			name = n;
			marks = m;
			gpa = g;
		}
		
		void setData(string n, int m, float g)
		{
			name = n;
			marks = m;
			gpa = g;
			
		}
		void CalcGPA()
		{
			if(marks < 60)
				gpa = 1.5;
			else if(marks >= 60 && marks <= 72)
				gpa = 2.0;
			else if(marks > 72 && marks <=80)
				gpa = 2.5;
			else if(marks >80 && marks <= 90)
				gpa = 3.0;
			else if(marks > 90 && marks <=94)
				gpa = 3.5;
			else if( marks > 94)
				gpa = 4.0;
		}
		
		void DisplayInfo()
		{
			cout<<"++++++++++++++++++++++++++++\n";
			cout<<"\nStudent Name  : "<<name;
			cout<<"\nStudent Marks : "<<marks;
			cout<<"\nStudent GPA   : "<<gpa;
			cout<<"\n++++++++++++++++++++++++++++\n\n";
		}
};

int main(int argc, char** argv) 
{
//	student s1, s2;
//	
//	//s1.name = "Sahil";   //Error
//	s1.setData("Sahil");
//	s1.CalcGPA();
//	
//	s2.setData("Jalil");
//	s2.CalcGPA();
//	
//	s1.DisplayInfo();
//	s2.DisplayInfo();	

//	student grad;
//	grad.DisplayInfo();
//	
//	student ugrad("ABC", 10, 1.5);
//	ugrad.DisplayInfo();
//	
//	//student ugrad("XYZZ", 20, 2.5);
//	
//	ugrad.setData("SALEEM",89, 3.5);
//	ugrad.DisplayInfo();
//	
//	ugrad.setData("SAHIL",98, 4.0);
//	ugrad.DisplayInfo();


	student s1;
	s1.
	return 0;
}