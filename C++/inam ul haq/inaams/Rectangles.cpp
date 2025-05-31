#include <iostream>

using namespace std;

class Rectangle
{
	private:
   		int length;
   		int width;
   		int area;
	public:
		
		Rectangle()
		{
			length = 1;
			width = 1;
			area = 1;
		}
		
		Rectangle(int l, int w, int a)
		{
			length = l;
			width = w;
			area = a;
		}
		
		void setDim(int l, int w, int a)
	   {
	   		length = l;
	   		width = w;
	   		area = a;
	   }
		
		Rectangle(int l, int w)
		{
			length = l;
			width = w;
			area = length * width;
		}
      
	   int getLength()
	   {
	   		return length;
	   }
	   
	   int getWidth()
	   {
	   		return width;
	   }
	   
	   
	   
//	   void setLength(int l)
//	   {
//	   		length=l;
//	   }
//	   
//	   void setWidth(int w)
//	   {
//	   		width=w;
//	   }
	   
		void calc_Area()
	   	{
	   		area=length*width;
	   	}
	   
	   void PrintDim()
	   {
	   		cout<<"Length  : "<<length;
	   		cout<<"\nWidth : "<<width;
	   		cout<<"\nArea  : "<<area;
	   }
};


int main(int argc, char** argv) 
{
	Rectangle r1, r2;

	

	cout<<"R1 Information:\n";
	r1.PrintDim();
	cout<<"\n\nR2 Information:\n";
	r2.PrintDim();
	
	Rectangle r3(10,10,10);
	Rectangle r4(20,20,20);
	
	r4.setDim(3,3,3);
	cout<<"\n\nR3 Information:\n";
	r3.PrintDim();
	cout<<"\n\nR4 Information:\n";
	r4.PrintDim();
	r4.setDim(5,5,5);
	cout<<"\n\nR4 Information:\n";
	r4.PrintDim();
	
	Rectangle r5(15,20);
	cout<<"\n\nR5 Information:\n";
	r5.PrintDim();
	

	return 0;
}