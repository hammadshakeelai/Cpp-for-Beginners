#include <iostream>

using namespace std;

class Rectangle
{
	private:
    	double width;
     	double length;
  	public:
     	// Default constructor
    	Rectangle()
        { 
			width = 0.0; 
          	length = 0.0; 
		}
     
	 	// Constructor #2
     	Rectangle(double w, double len)
        { 
			width = w;
          	length = len; 
		}
          	
     	double getWidth() const
       	{ 
		   return width; 
		}
		
	    double getLength() const
        { 
			return length; 
		}
     	
		double getArea() const
        { 
			return width * length;
		}
		
		
};


class Cube : public Rectangle
{
	protected:
    	double height;
    	double volume;
  	public:
    	// Default constructor
     	Cube() : Rectangle()
        { 
			height = 0.0; volume = 0.0; 
		}
		
		// Constructor #2
     	Cube(double w, double len, double h) : Rectangle(w, len)
        { 
			height = h; 
          	volume = getArea() * h; 
		}
     	double getHeight() const
        { 
			return height; 
		}
     	double getVolume() const
        { 
			return volume; 
		}
  

};


int main(int argc, char** argv) 
{
	double cubeWidth;  // To hold the cube's width
	double cubeLength; // To hold the cube's length
	double cubeHeight; // To hold the cube's height
	
	// Get the width, length, and height of the cube from the user.
	cout << "Enter the dimensions of a cube:\n";
	cout << "Width: ";
	cin >> cubeWidth;
	cout << "Length: ";
	cin >> cubeLength;
	cout << "Height: "; 
	cin >> cubeHeight;
	
	Cube myCube(cubeWidth, cubeLength, cubeHeight);
	// Display the Cube object's properties.
	cout << "Here are the cube's properties:\n";
	cout << "Width: " << myCube.getWidth() << endl;
	cout << "Length: " << myCube.getLength() << endl;
	cout << "Height: " << myCube.getHeight() << endl;
	cout << "Base area: " << myCube.getArea() << endl;
	cout << "Volume: " << myCube.getVolume() << endl;



	return 0;
}