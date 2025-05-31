#include <iostream>
using namespace std;
class test
{
	private:
		int a, b;
		
		
	public:
		int c;
		void setData()
		{
			cout<<"Enter Value-1 : ";
			cin>>a;
			cout<<"Enter Value-2 : ";
			cin>>b;
			cout<<"Enter Value-2 : ";
			cin>>c;
			
		}
		void DisplayData()
		{
			cout<<"a = "<<a;
			cout<<"\nb = "<<b;
			cout<<"\nc = "<<c;
		}
};

int main(int argc, char** argv) 
{
	test t1, t2, t3;
	cout<<"setting t1 data.........\n";
	t1.setData();
	cout<<"setting t2 data.........\n";
	t2.setData();
	
	cout<<"\n\nT1 Data : \n";
	t1.DisplayData();
	cout<<"\n\nT2 Data : \n";
	t2.DisplayData();
	
	
	t3.
	
	return 0;
}