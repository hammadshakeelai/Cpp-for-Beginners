#include <iostream>
using namespace std;
class car{
    public:
        string brand;
        string name;
        int model;
        car(){
           brand="no brand";
           name="no name";
           model=0000;
        }
        car(string B,string N,int M){
            brand=B;
            name=N;
            model=M;
        }
        void display(){
            cout<<brand<<endl<<name<<endl<<model<<endl;
        }
            
};
int main() {
    //car objectcar;
    //car objectcar("Mercedes","AMG",2018);
    //objectcar.carcin();
    string b,n;
    int m;
    cin>>b>>n>>m;
    car objectcar(b,n,m);
    objectcar.display();
    
    return 0;
}