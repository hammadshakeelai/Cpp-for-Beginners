#include<iostream>
using namespace std;
class Patient{
    public:
        char gender;
        int age;
        void newPatient(char Gender,int Age){
            gender=Gender;
            age=Age;
            cout<<"New Patient: ";
            if(Gender=='m'){
                cout<<"Male ";
            }else{
                cout<<"Female ";
            }
            cout<<Age<<endl;
        }
        void ward(){
            if(gender=='m'){
                if(age>10){
                    cout<<"Admit Patient to Males Ward \n";
                }
                else{
                    cout<<"Admit Patient to Childrens Ward \n";
                }
            }
            else{
                if(age>10){
                    cout<<"Admit Patient to Females Ward \n";
                }
                else{
                    cout<<"Admit Patient to Childrens Ward \n";
                }
            }
        }
};
int main(){

    Patient alihaider;
    alihaider.newPatient('m',10);
    alihaider.ward();
    
    Patient alihaider2;
    alihaider2.newPatient('m',11);
    alihaider2.ward();
    
    Patient alihaider3;
    alihaider3.newPatient('f',10);
    alihaider3.ward();
    
    Patient alihaider4;
    char gendr = 'f';
    alihaider4.newPatient(gendr,11);
    alihaider4.ward();
    return 0;
}