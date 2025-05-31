#include <iostream>

using namespace std;
class Fraction
{
	private:
		
		int N;
		int D;
		
	public:
		Fraction()
		{
			N = 1;
			D = 1;
		}
		Fraction(int N, int D)
		{
			this->N = N;
			this->D = D;
		
		}
		void setFrac(int N, int D)
		{
			this->N = N;
			this->D = D;
		}
		void showFrac()
		{
			cout<<"\n\nThe Original Fraction : "<<N<<"/"<<D;
		}
		
		
		
		Fraction simplifyFrac()
		{
			int GCD = 1;
			if(N != 0 )
			{
				GCD = gcd(N, D);
			}
			
			Fraction simp(N/GCD, D/GCD);
			return simp;
		}
		
		int gcd(int x, int y) 
		{
			int r = y % x;
			while (r !=0) 
			{
				y = x;
				x = r;
				r = y % x;
			}
			
			return x;
		}
		
		Fraction SumFrac(Fraction F)
		{
			Fraction SUM;
		}
		
		
		
};

int main(int argc, char** argv) 
{
	int n, d;
	cout<<"Enter Numerator Value (Other than 0): ";
	cin>>n;
	cout<<"Enter Denomenator Value (Other than 0): ";
	cin>>d;
	
	Fraction F0;
	Fraction F1(n, d);
	
	
	Fraction simpF1 = F1.simplifyFrac();
	F1.showFrac();
	simpF1.showFrac();
	
	Fraction SUM = F0.SumFrac(F1);
	
	
	
	
	return 0;
}