//dynamically create objects
#include<iostream>
using namespace std;

class FoodItem{
	public:
		string name;
		int price;
		FoodItem(string n="unknown",int p=100){
			name=n;
			price=p;
		}
		void show(){
			cout<<name<<" has a price of "<<price<<"\n";
		}
};
void displayfooditems(FoodItem a,FoodItem b,FoodItem c,FoodItem d,FoodItem e,FoodItem f,FoodItem g){
	cout<<"1. ";
	a.show();
	cout<<"2. ";
	b.show();
	cout<<"3. ";
	c.show();
	cout<<"4. ";
	d.show();
	cout<<"5. ";
	e.show();
	cout<<"6. ";
	f.show();
	cout<<"7. ";
	g.show();
}
class MealCard{
	private:
		int points;
	public:
		MealCard(int p=100){
			points=p;
		}
		void add_points(int p){
			points+=p;
			displayPoints();
		}
		void purchase_item(FoodItem item){
			if (item.price>points){
				cout<<"Insufficient Balance.\n";
			}
			else{
				points-=item.price;
				cout<<item.name<<" bought.\n";
			}
			displayPoints();
		}
		void displayPoints(){
			cout<<"points: "<<points<<"\n";
		}
};
int main(){
	FoodItem burger("beefburger",99);
	FoodItem pizza1("chicken tikka",80);
	FoodItem pizza2("cheese",50);
	FoodItem sandwich("crispy chicken",150);
	FoodItem chaat("samosa chaat",100);
	FoodItem colanext("soft drink",100);
	FoodItem biscuit("gala",50);
	displayfooditems(burger,pizza1,pizza2,sandwich,chaat,colanext,biscuit);
//	MealCard *emp;
//	emp = new MealCard(450);
//	emp->displayPoints();
//	emp->add_points(50);
//	emp->purchase_item(pizza1);
bool exit=1;
bool cardnotmade=1;
while(exit){
	
	int decision=1;
	do{
		if(decision>3 || decision<1){
			cout<<"invalid option selected\n";
		}
		cout<<"do you wnat to new create card(1) / exit program(2) /buy item(3)/add points(4):  ";
		cin>>decision;
	}while(decision!=1 && decision!=2 && decision!=3 && decision!=4) ;
	char buypnts='y';
	int defaultpoints=100;
	if (decision==1){
		do{
			if(buypnts!='y' && buypnts!='n'){
				cout<<"invalid option.try again...\n";
			}
			cout<<"do you want to purchase points for card(y/n): ";
			cin>>buypnts;
			if (buypnts=='y'){
				cout<<"enter how many points to buy: ";
				cin>>defaultpoints;
				while(defaultpoints<0){
					cout<<"invalid amount...\n";
					cout<<"enter how many points to buy: ";
					cin>>defaultpoints;
				}
			}
		}while(buypnts!='y' && buypnts!='n');
	}
	switch(decision){
		case 1:
			MealCard *emp;
			emp = new MealCard(defaultpoints);
			cout<<"card made with ";
			emp->displayPoints();
			cardnotmade=false;
			break;
		case 2:
			cout<<"exiting programme";
			exit=0;
			return 0;
			break;
		case 3:
			if(cardnotmade){
				cout<<"sorry make a card first..\n";
				break;
			}
			int itemnum;
			cout<<"enter item no. : ";
			cin>>itemnum;
			while(itemnum>7 || itemnum<1){
				cout<<"invalid item no.  , try again...\nenter item no. : ";
				cin>>itemnum;
			}
			switch(itemnum){
				case 1:
					emp->purchase_item(burger);
					break;
				case 2:
					emp->purchase_item(pizza1);
					break;
				case 3:
					emp->purchase_item(pizza2);
					break;
				case 4:
					emp->purchase_item(sandwich);
					break;
				case 5:
					emp->purchase_item(chaat);
					break;
				case 6:
					emp->purchase_item(colanext);
					break;
				case 7:
					emp->purchase_item(biscuit);
					break;
			}
			break;
		case 4:
			if (cardnotmade){
				cout<<"sorry make a card first\n";
				break;
			}
			int pnts;
			cout<<"enter how many points you want to add: ";
			cin>>pnts;
			while(pnts<0){
				cout<<"invalid amount try again.\nenter how many points you want to add: ";
				cin>>pnts;
			}
			emp->add_points(pnts);
	}
}

	return 0;
}
//#include<iostream>
//#include<string>
//using namespace std;
//class SuperClass{
//	private:
//		string name;
//		int rollnumber;
//	public:
//		SuperClass(string n="unknown",int r=0){
//			name=n;
//			rollnumber=r;
//			cout<<"Object Made: "<<name<<" , "<<rollnumber<<endl;
//		}
//		SuperClass(int rollnumber,string name ):SuperClass(name,rollnumber){}
//		SuperClass(string name):SuperClass(name,00){}
//		SuperClass(int rollnumber):SuperClass("unknown",rollnumber){}
//};
//class SubClass: public SuperClass{
//	private:
//		
//	public:
//		SubClass(){
//		}
////		SubClass(){
////		}
////		SubClass(){
////		}
////		SubClass(){
////		}
////		SubClass(){
////		}
//	
//};
//int main(){
//	SuperClass obj1("car",3);
//	SuperClass obj2("dog");
//	SuperClass obj3(3);
//	SuperClass obj4(1);
//	SuperClass obj5(0);
//	SuperClass obj6("ragdoll",6);
//}
/*
employee *emp;
emp = new employee;

emp->showdata();
emp->
//

int *num1;
num1 = new int;

*/