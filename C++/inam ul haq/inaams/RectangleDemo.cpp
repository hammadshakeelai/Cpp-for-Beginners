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
		
		Rectangle(int l, int w)
		{
			length = l;
			width = w;
			calc_Area();
			
		}
		
		Rectangle createRectangle(int l, int w)
		{
			Rectangle r6(l, w);
			return r6;
			
		}
		int getWidth()
	   	{
	   		return width;
	   	}
	   	
	   	void setData(int w, int l)
	   	{
	   		length = l;
	   		width = w;
	   		calc_Area();
		}
	   	

		void calc_Area()
	   	{
	   		area=length*width;
	   	}
	   	
	   	void DisplayInfo()
	   	{
	   		cout<<"Length  : "<<length;
	   		cout<<"\nWidth : "<<width;
	   		cout<<"\nArea  : "<<area;
	   		
		}
};


int main(int argc, char** argv) 
{
	Rectangle r1;
	Rectangle r2(10,10,10);
	Rectangle r3(5,5,5);
	Rectangle r4(12, 24);
	
	
	cout<<"R1 Information\n";
	r1.DisplayInfo();
	cout<<"\n---------------------\n";
	
	cout<<"R2 Information\n";
	r2.DisplayInfo();
	cout<<"\n---------------------\n";
	cout<<"R3 Information\n";
	r3.DisplayInfo();
	cout<<"\n---------------------\n";
	
	cout<<"R4 Information\n";
	r4.DisplayInfo();
	cout<<"\n---------------------\n";
	
	Rectangle r7 = r4.createRectangle(100, 100);
	r7.DisplayInfo();
	
	
	return 0;
}