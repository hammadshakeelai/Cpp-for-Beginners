#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) 
{
//	ofstream outputFile;  // File stream object
//    int numberOfDays;     // Number of days of sales
//    double sales;         // Sales amount for a day
//    
//	// Get the number of days.
//    cout << "For how many days do you have sales? ";
//    cin >> numberOfDays;
//    
//	// Open a file named Sales.txt.
//    outputFile.open("Sales.txt");
//    
//    // Get the sales for each day and write it to the file.
//    
//    for (int count = 1; count <= numberOfDays; count++)
//    { 
//        // Get the sales for a day.
//        cout << "Enter the sales for day "<< count << ": ";
//        cin >> sales;
//    	
//		// Write the sales to the file.
//        outputFile << sales << endl;
//    }
//      
//	// Close the file.
//    outputFile.close();
//    cout << "Data written to Sales.txt\n";



	//READING SALES FROM FILE
	
	ifstream inputFile;
    int sales, Total=0;
    
	// Open the file.
    inputFile.open("Sales.txt");
    int day = 1;
	
	while (inputFile >> sales)
    {
        cout <<"Sales for Day-"<<day<<" : "<< sales << endl;
		Total += sales; 
		day++;
    }
    // Close the file.
    inputFile.close();
    
    cout<<"Total Sales of the Week : "<<Total;



	return 0;
}