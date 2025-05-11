#include<iostream>
using namespace std;
class Fraction{
	public:
		int numerator;
		int denominator;
//		double answer	;
	public:
		Fraction(int n=1,int d=1){
			if(d==0){
				d=1;
			}
			numerator=n;
			denominator=d;
			showfraction();
			cout<<endl;
		}
		void setter(int n=1,int d=1){
			if(d==0){
				d=1;
			}
			numerator=n;
			denominator=d;
		}
		double getter(){
			double a,b;
			a=numerator;
			b=denominator;
			return a/b;
		}
		void showfraction(){
			cout<<numerator<<"/"<<denominator;
		}
		void simplification(){//my method
			for(int i=(numerator*(numerator>denominator)+denominator*(denominator>=numerator))/2;i>0;i--){
				if((numerator%i==0)&&(denominator%i==0)){
					numerator/=i;
					denominator/=i;
				}
			}
		}
		void cout_simplified(){
			int gcd,a,b;
			if(numerator>denominator){
				a=numerator;
				b=denominator;
			}else{
				a=denominator;
				b=numerator;
			}
			gcd=a%b;
			while(gcd!=0){
				a=b;
				b=gcd;
				gcd=a%b;
			}
			gcd=b;
			cout<<numerator/gcd<<"/"<<denominator/gcd;
		}
		void multiply(Fraction other){
			numerator*=other.numerator;
			denominator*=other.denominator;
			simplification();
		}
		void add(Fraction other){
			numerator=(numerator*other.denominator)+(other.numerator*denominator);
			denominator=denominator*other.denominator;
			simplification();
		}
		void subtract(Fraction other){
			numerator=(numerator*other.denominator)-(other.numerator*denominator);
			denominator=denominator*other.denominator;
			simplification();
		}
		void divide(Fraction other){
			numerator*=other.denominator;
			denominator*=other.numerator;
			simplification();
		}
};
int main(){
	Fraction one(22,7);
	Fraction two(4,8);
	one.add(two);
	one.showfraction();
	cout<<"\n";
	one.multiply(two);
	one.showfraction();
	cout<<"\n";
	one.divide(two);
	one.showfraction();
	cout<<"\n";
	one.subtract(two);
	one.showfraction();
	cout<<"\n";
	return 0;
}