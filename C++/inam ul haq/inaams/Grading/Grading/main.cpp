// This program demonstrates the GradedActivity class.
/*
#include <iostream>
#include "GradedActivity.h"
using namespace std;


int main(int argc, char** argv) 
{
	double testScore;  // To hold a test score 
  
    // Create a GradedActivity object for the test.
    GradedActivity test;
 
    // Get a numeric test score from the user.
    cout << "Enter your numeric test score: ";
    cin >> testScore;
 
    // Store the numeric score in the test object.
    test.setScore(testScore);
 
    // Display the letter grade for the test.
    cout << "The grade for that test is "<< test.getLetterGrade() << endl;
	return 0;
}
*/


// This program demonstrates a base class and a derived class.
#include <iostream>
#include <iomanip>
#include "FinalExam.h"
using namespace std;

 // This program demonstrates a base class and a derived class.
#include <iostream>
#include <iomanip>
#include "FinalExam.h"
using namespace std;

int main()
{
	int questions; // Number of questions on the exam
 	int missed;    // Number of questions missed by the student
 
    // Get the number of questions on the final exam.
    cout << "How many questions are on the final exam? ";
    cin >> questions;
 
    // Get the number of questions the student missed.
    cout << "How many questions did the student miss? ";
    cin >> missed;

    // Define a FinalExam object and initialize it with
	// the values entered.
    FinalExam test(questions, missed); 

    // Display the test results.
    cout << setprecision(2);
    cout << "\nEach question counts " << test.getPointsEach()<< " points.\n";
    cout << "The exam score is " << test.getScore() << endl;
    cout << "The exam grade is " << test.getLetterGrade() << endl;
 
    return 0;
 }