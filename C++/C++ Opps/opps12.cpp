#include<iostream>
using namespace std;
class redbull{
	private:
		bool nott = 1;
	protected:
		string doremonkikahani = "kabadi kabadi kabadi";
	public:
		void displaynott(){
			cout<<nott<<endl;
		}
};
class f1 : public redbull{
	public:
		void setawesome(string d){
			doremonkikahani=d;
			cout<<"Value set.\n";
		}
		string getawesome(){
			return doremonkikahani; 
		}
};
int main(){
	
	f1 maxverstaphen;
	cout<<maxverstaphen.getawesome()<<endl;
	maxverstaphen.setawesome("vnfgbfs");
	cout<<maxverstaphen.getawesome()<<endl;
	maxverstaphen.displaynott();
	
	return 0;
}