#include <iostream>
#include <string>
using namespace std;
void wrapper(){
	
	for(int i=0;i<50;i++)
	cout<<"_";
	cout<<endl;
}
class Vehicle{
	public:
		bool carState = 0;
		double speed = 0;
		string gear = "static";
		
		void goBackward(double Speed){
			if(!carState){
				wrapper();
				cout<<"car is not started \n";
				wrapper();
				return;
			}
			speed = Speed;
			gear = "Backwards";
			wrapper();
			cout<<" car is going backwards with "<<speed<<"\n";
			wrapper();
		}
		void goForward(double Speed){
			if(!carState){
				wrapper();
				cout<<"car is not started \n";
				wrapper();
				return;
			}
			speed = Speed;
			gear = "Forwards";
			wrapper();
			cout<<" car is going forwards with "<<speed<<"\n";
			wrapper();
		}
		void start(){
			carState = 1;
			wrapper();
			cout<<" car is now started \n";
			wrapper();
		}
		void stop(){
			speed = 0;
			carState = 0; 
			gear = "static";
			wrapper();
			cout<<" car is now stopped \n";
			wrapper();
		}
		void display(){
			if(carState){
				wrapper();
				cout<<"car is running/start \n";
				wrapper();
				if(speed){
					wrapper();
					cout<<" with a speed of "<<speed<<" going "<<gear<<"\n";
					wrapper();
				}
			}
			else{
				wrapper();
				cout<<"car is stopped \n";
				wrapper();
			}
		}
};

class pickuptruck : public Vehicle{
	public:
		int seats = 5;
		double loadCapacity;
		int numWheels = 4;
		double weight;
		
		pickuptruck(double loadc,double w8){
			loadCapacity = loadc;
			weight = w8;
		}
		void diplaytruck(){
			wrapper();
			cout<<seats<<" seats and "<<numWheels<<" wheels with a weight of "<<weight<<" its load capacity is a wooping "<<loadCapacity<<"\n";
			wrapper();
		}
};
class bus : public Vehicle{
	public:
		int seats;
		double weight;
		bool doorsOpen = 0;
		
		bus(int s,double w8){
			weight = w8;
			seats = s;
		}	
		void closeDoors(){
			doorsOpen = 0;
			wrapper();
			cout<<"bus doors are now closed \n ";
			wrapper();
		}	
		void openDoors(){
			doorsOpen = 1;
			wrapper();
			cout<<"bus doors are now opened \n ";
			wrapper();
		}	
		void displaybus(){
			wrapper();
			(doorsOpen)?(cout<<"bus doors are open \n"): (cout<<"bus doors are closed \n");
			cout<<"has "<<seats<<" seats\n";
			cout<<"its weight is "<<weight<<"\n";
			wrapper();
		}
};
class car : public Vehicle{
	public:
		int seats = 5;
		int numWheels = 4;
		double weight;
				
		car(double w8){
			weight = w8;
		}
		void honk(){
			wrapper();
			cout<<" Car Honks \n";
			wrapper();
		}
		void carqualities(){
			wrapper();
			cout<<"car weight is "<<weight<<"\n has "<<seats<<" seats and "<<numWheels<<" wheels \n";
			wrapper();
		}
};
class convertible : public car{
	public:
		bool roofopen = 0;
		
		convertible(double w8) : car(w8) {
		}
		
		void openRoof(){
			roofopen = 1;
			wrapper();
			cout<<"roof is now open \n ";
			wrapper();
		}
		void closeRoof(){
			roofopen = 0;
			wrapper();
			cout<<"roof is now closed \n ";
			wrapper();
		}
		void roofis(){
			wrapper();
			cout<<"roof is "<<(roofopen?"open":"close")<<"\n";
			wrapper();
		}	
};

int main(){
//	Vehicle spaceship;
//	spaceship.goBackward(50.0);
//	spaceship.goForward(50.0);
//	spaceship.start();
//	wrapper();
//	spaceship.goForward(50.0);
//	wrapper();
//	spaceship.display();
	
    cout << "5) Convertible" << endl;
    convertible sport(1400.0);
    sport.openRoof();
    sport.start();
    sport.goForward(80.0);
    sport.roofis();
    sport.honk();
    sport.closeRoof();
    sport.stop();
    cout << endl;	
	
	
	
	return 0;
}
//int main() {
//    cout << "1) Generic Vehicle" << endl;
//    Vehicle v;
//    v.display();
//    v.start();
//    v.goForward(20.0);
//    v.display();
//    v.goBackward(10.5);
//    v.stop();
//    cout << endl;
//
//    cout << "2) Pickup Truck" << endl;
//    pickuptruck pt(1000.0, 2500.0);
//    pt.display();
//    pt.start();
//    pt.goForward(55.0);
//    pt.diplaytruck();
//    pt.stop();
//    cout << endl;
//
//    cout << "3) City Bus" << endl;
//    bus cityBus(40, 8000.0);
//    cityBus.openDoors();
//    cityBus.displaybus();
//    cityBus.start();
//    cityBus.goForward(35.0);
//    cityBus.displaybus();
//    cityBus.closeDoors();
//    cityBus.stop();
//    cout << endl;
//
//    cout << "4) Sedan" << endl;
//    car sedan(1500.0);
//    sedan.start();
//    sedan.goForward(65.0);
//    sedan.honk();
//    sedan.carqualities();
//    sedan.stop();
//    cout << endl;
//
//    cout << "5) Convertible" << endl;
//    convertible sport(1400.0);
//    sport.openRoof();
//    sport.start();
//    sport.goForward(80.0);
//    sport.roofis();
//    sport.honk();
//    sport.closeRoof();
//    sport.stop();
//    cout << endl;
//
//    cout << "Simulation complete." << endl;
//    return 0;
//}