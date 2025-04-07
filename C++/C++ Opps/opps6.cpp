#include <iostream>
using namespace std;
class Box {
  public:
	int vol=0;
		
	Box() {
	  int length=10;
	  int height=11;
	  vol=height*length;
	}
	void volume(){
	  cout<<"volume: "<<vol<<endl;
	}
};
int main() {
  Box box1;
  box1.volume();
  return 0;
}