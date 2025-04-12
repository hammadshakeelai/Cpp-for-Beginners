#include<iostream>
using namespace std;
class Patient{
    public:
        char gender;
        int age;
        Patient(char Gender,int Age){
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
                if(age>16){
                    cout<<"Admit Patient to Males Ward \n";
                }
                else{
                    cout<<"Admit Patient to Childrens Ward \n";
                }
            }
            else{
                if(age>16){
                    cout<<"Admit Patient to Females Ward \n";
                }
                else{
                    cout<<"Admit Patient to Childrens Ward \n";
                }
            }
        }
};
int main(){
    char gender;
    int age;
    cout<<"enter gender m/f: ";
    cin>>gender;
    cout<<"enter age: ";
    cin>>age;

    Patient patient1(gender,age);
    patient1.ward();
    
    // Patient patient2;
    // patient2.newPatient('m',11);
    // patient2.ward();
    
    // Patient patient3;
    // patient3.newPatient('f',10);
    // patient3.ward();
    
    // Patient patient4;
    // char gendr = 'f';
    // patient4.newPatient(gendr,11);
    // patient4.ward();
    return 0;
}