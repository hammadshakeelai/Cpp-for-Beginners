#include <iostream>

using namespace std;

class MealCard 
{
	private:
    	string studentID;
    	int balance;

	public:
		
	MealCard()
	{
		studentID = "IMS";
		balance = 100;
	}
    
    MealCard(string id, int initial)
	{
		studentID = id;
			
        if (initial < 0) 
		{
            cout << "Warning: Balance cannot be negative. Setting to 100.\n";
            balance = 100;
        }
        else
        	balance = initial;
    }

    
    void purchasePoints(int points)
	{
        if (points > 0) 
		{
            balance += points;
            cout << points << " points are added to " << studentID<< "'s card.\n";
        } 
		else 
		{
			cout << "Error: Only Positive Points can be Added.\n";
        }
    }

    void purchaseFood(int points) 
	{
        if (points <= 0) 
		{
            cout << "Error: Insufficient Point Balance in your Card.\n";
        }

        if (balance >= points) 
		{
            balance -= points;
            cout << studentID << " purchased food for " << points 
                 << " points. \nRemaining balance: " << balance << endl;
            
        } 
		else 
		{
            cout << "Purchase failed: " << studentID 
                 << " has insufficient points (needs " << points 
                 << ", has " << balance << ")\n";
            
        }
    }

    
    int getBalance()
	{
        return balance;
    }

    string getStudentName()
	{
        return studentID;
    }

    void displayStatus()
	{
        cout << "\nMeal Card Status:\n"
             << "Student ID: " << studentID << "\n"
             << "Balance: " << balance << " points\n";
    }
};

class FoodMenu
{
	private:
		string items[5];
		int points[5];
	public:
		FoodMenu()
		{
			items[0] = "Burger";
			items[1] = "Drink ";
			items[2] = "Samosa";
			items[3] = "Cofee ";
			items[4] = "Tea   ";
			
			points[0] = 5;
			points[1] = 10;
			points[2] = 4;
			points[3] = 15;
			points[4] = 8;
		}
		
		void showMenu()
		{
			cout<<"ITEM\t   PRICE(Points)\n";
			cout<<"-----------------------\n";
			for(int i=0; i<5; i++)
			{
				cout<<i+1<<". "<<items[i]<<"\t"<<points[i]<<"\n";
			}
			cout<<"-----------------------\n";
			
			cout<<"\n\nSelect Your Food Items and Quantity:\n";
			//TakeOrder();
		}
		
		int getOrderPoints()
		{
			int order[] = {0,0,0,0,0};
			int quantity, totalPoints = 0;
			for(int i=0; i<5; i++)
			{
				cout<<"\nQuanitity "<<items[i]<<" : ";
				cin>>quantity;
				order[i] = points[i] * quantity;
			}
			
			cout<<"\nYour Order interms of Item's Quantity : \n";
			for(int i=0; i<5; i++)
			{
				cout<<"\n"<<items[i]<<" : "<<order[i];
				totalPoints += order[i];
			}
			
			cout<<"\n-----------------------------------------";
			cout<<"\nTotal Points To be Consumed : "<<totalPoints;
			
			return totalPoints;
			
		}
		
};

int main(int argc, char** argv) 
{
	FoodMenu *menu = new FoodMenu();
	MealCard* card1 = new MealCard("IMS-DS-10", 200);
	int choice, points;
	int foodPoints; 
	while(true)
	{
		cout<<"\n\n##### WELCOME TO IMSCIENCES CAFETERIA #####\n";
		cout<<"===============================================\n\n";
		cout<<"1. Show Meal Card Status\n";
		cout<<"2. Recharge Meal Card\n";
		cout<<"3. Purchase Meal\n";
		cout<<"4. Exit\n";
		cout<<"\n---------------------------------------------\n\n";
		cout<<"Enter Choice (1/2/3/4) : ";
		cin>>choice;
		if(choice == 1)
		{
			cout << "\n=== Testing Meal Card System ===\n";
		    card1->displayStatus();
		}
		else if(choice == 2)
		{
			cout << "\n=== Adding Points ===\n";
			cout<<"\nHow many Points you Want to Purchase : ";
			cin>>points;
    		card1->purchasePoints(points);
		}
		else if(choice == 3)
		{
			menu->showMenu();
			foodPoints = menu->getOrderPoints();
			cout << "\n\n=== Making Purchases ===\n\n";
			 
    		card1->purchaseFood(foodPoints);    // Successful
		}
		else if(choice == 4)
		{
			exit(0);
		}
		else
		{
			cout<<"\nInvalid Choice Entered! Try Again";
		}
	}
	

	
	
	
	
	    
    
    //MealCard* card2 = new MealCard("IMS-AI-20", 200);

    
    //card2->displayStatus();


    
//    card1->purchaseFood(60);    // Should fail (only 50 left)
//    card2->purchaseFood(150);   // Successful
//    card2->purchaseFood(100);   // Should fail (only 50 left)


    
//    card2->purchasePoints(200);

//    // Try purchases again
//    cout << "\n\n=== Making More Purchases ===\n";
//    card1->purchaseFood(60);    // Now should work (125-60=65)
//    card2->purchaseFood(100);   // Now should work (250-100=150)
//
//    // Test edge cases
//    cout << "\n=== Testing Edge Cases ===\n";
//    card1->purchaseFood(0);     // Invalid (zero points)
//    card1->purchaseFood(-10);   // Invalid (negative points)
//    card1->purchasePoints(-50);      // Invalid (negative points)
//
//    // Final status
//    cout << "\n=== Final Status ===\n";
//    card1->displayStatus();
//    card2->displayStatus();
//
//    // Clean up
//    delete card1;
//    delete card2;
	return 0;
}