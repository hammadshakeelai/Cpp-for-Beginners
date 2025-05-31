#include <iostream>

using namespace std;
class A //base class
{
	private:
	    int privdataA;
	protected:
	    int protdataA;
	public:
	    int pubdataA;
	};

class B : public A //publicly-derived class
{
	public:
	    void funct()
	    {
	        int a;
	        a = privdataA; //error: not accessible
	        a = protdataA; //OK
	        a = pubdataA; //OK
	    }
};


int main(int argc, char** argv) 
{
	    int a;
    B objB;
    a = objB.privdataA; //error: not accessible
    a = objB.protdataA; //error: not accessible
    a = objB.pubdataA; //OK (A public to B)

	return 0;
}