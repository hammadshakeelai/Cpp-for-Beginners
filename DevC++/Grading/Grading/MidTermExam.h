#ifndef MIDTERMEXAM_H
#define MIDTERMEXAM_H
#include "GradedActivity.h"

class MidTermExam: public GradedActivity{
	private:
		double numberOfQuestions;
		double questionsAnsweredCorrectly;
		double totalMarks;
	public:
		MidTermExam(){
			numberOfQuestions = 3;
			questionsAnsweredCorrectly = 0;
			totalMarks = 30;
		}
		MidTermExam(double noq,double qac,double tm){
			numberOfQuestions = noq;
			questionsAnsweredCorrectly = qac;
			totalMarks = tm;
		}
		void setNumberOfQuestions(double n){
			numberOfQuestions = n;
		}
		void setQuestionsAnsweredCorrectly(double q){
			questionsAnsweredCorrectly = q;
		}
		void setTotalMarks(double m){
			totalMarks = m;
		}
		double calculateMarks(){
			return ((totalMarks/numberOfQuestions)*questionsAnsweredCorrectly);
		}
		double getTotalMarks(){
			return totalMarks;
		}
		double getQuestionsAnsweredCorrectly(){
			return questionsAnsweredCorrectly;
		}
		double getNumberOfQuestions(){
			return numberOfQuestions;
		}
};
#endif