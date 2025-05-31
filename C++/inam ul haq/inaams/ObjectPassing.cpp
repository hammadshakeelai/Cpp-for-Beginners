#include <iostream>
#include <ctime>
using namespace std;

class Dice
{
	private:
		int face;    // 1-6
	public:
		Dice()
		{
			face = 0;
		}
		
		void Roll()
		{
			face = (rand()%6)+1; 
		}
		
		void Show()
		{
			cout<<face<<"\n";
		}
		
		int SumFaces(Dice d)
		{
			int total = face + d.face;
			return total;
		}
};



int main(int argc, char** argv) 
{
	srand(time(0));
	
	Dice d1, d2;
	d1.Roll();
	d2.Roll();
	cout<<"\nd1 face value: ";
	d1.Show();
	cout<<"\n\nd2 face value: ";
	d2.Show();
	
	int total = d1.SumFaces(d2);
	cout<<"\n\nTotal Value : "<<total;
	
	return 0;
}