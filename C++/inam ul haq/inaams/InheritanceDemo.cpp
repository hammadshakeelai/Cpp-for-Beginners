#include <iostream>

using namespace std;
class A
{
    private:
    	int a1, a2;
    protected:
    	int pa1, pa2;
    public:
	    void ppp(void)
	    {
	        cout<<"Value of pa1 of class A: "<<pa1<<endl;
	        cout<<"Value of pa2 of class A: "<<pa2<<endl;
	    }
}; // end of base class A

//derived class 
class B : public A
{
    public:
    void get(void)
    {
    	//cout<<"Enter value of a1: "; cin>>a1;
        //cout<<"Enter value of a2: "; cin>>a2;
    	
        cout<<"Enter value of pa1: "; cin>>pa1;
        cout<<"Enter value of pa2: "; cin>>pa2;
        
        
    }
};  // end of derived class B


int main(int argc, char** argv) 
{
	B obj;
    obj.get();
    obj.ppp();

	return 0;
}