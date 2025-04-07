#include <iostream>
class A {
	public:
		void B() {
			std::cout<<"hello world"<<std::endl;
		}
};
int main() {
	A a1;
	a1.B();
    return 0;
}