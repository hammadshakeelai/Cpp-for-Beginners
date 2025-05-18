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
#include "FinalExam.h"


 // This program demonstrates a base class and a derived class.
#include <iostream>
#include <iomanip>
#include "MidTermExam.h"
using namespace std;

int main()
{
	int questions; // Number of questions on the exam
 	int correct;    // Number of questions missed by the student
 
    // Get the number of questions on the final exam.
    cout << "How many questions are on the final exam? ";
    cin >> questions;
 
    // Get the number of questions the student missed.
    cout << "How many questions did the student do correctly? ";
    cin >> correct;

    // Define a FinalExam object and initialize it with
	// the values entered.
	MidTermExam test(questions, correct,30.0); 

    // Display the test results.
    cout << setprecision(2);
    cout << "\nEach question counts " << (test.getTotalMarks()/test.getNumberOfQuestions())<< " points.\n";
    cout << "The exam score is " << test.calculateMarks() << endl;
 
    return 0;
 }