#include<iostream>
#include<string>//oop analysis and design
using namespace std;
class Car{
	public:
		string name;
		string brand;
		char tier;
		int maxSpeed;
		float horsePower;
		
		string carType;
		bool isAuto;
		int price;
		double milage;
		
		car(string nm,string brnd,char tr,int mxspd,float hp){
			name=nm;
			brand=brnd;
			tier=tr;
			maxSpeed=mxspd;
			horsePower=hp;
		}
		void carInDetail(string nm,string brnd,char tr,int mxspd,float hp,string crtp,bool Auto,int p,double m){
			name=nm;
			brand=brnd;
			tier=tr;
			maxSpeed=mxspd;
			horsePower=hp;
			carType=crtp;
			isAuto=Auto;
			price=p;
			milage=m;
		}
		void display(bool full){
			cout<<"___________________________________________\n";
			cout<<"Car Name:  "<<name<<endl;
			cout<<"Car Brand:  "<<brand<<endl;
			cout<<"Car Tier:  "<<tier<<endl;
			cout<<"Car Max Speed:  "<<maxSpeed<<endl;
			cout<<"Car Horse Power:  "<<horsePower<<endl;
			cout<<"Car Type:  "<<carType<<endl;
			cout<<"Car is "<<(isAuto ? "Automatic" : "Manual" )<<endl;
			cout<<"Car Price:  "<<price<<endl;
			cout<<"Car Milage:  "<<milage<<endl;
			cout<<"___________________________________________\n";
			
		}
};
int main(){
	Car mycar;
	mycar.carInDetail("yaris","toyota",'C',195,117.6,"sedan",1,4800000,8);
	mycar.display(1);
	return 0;
}