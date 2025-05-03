#include<iostream>
using namespace std;
double widows_share(double total_assets){
	return 0.125 * total_assets;
}
double daughters_share(double total_assets){
	
}
int main(){
	double total_assets;
	cout<<"Enter total assets of the Dead Man:  ";
	cin>>total_assets;
	cout<<"Widows share is "<<widows_share(total_assets)<<endl;
	double wifes;
	cout<<"How many wife's did he had:  ";
	cin>>wifes;
	cout<<"Remaining Assets are "<<total_assets-(wifes*widows_share(total_assets))<<endl;
	double remaining_assets = total_assets-(wifes*widows_share(total_assets));
	double sons,daughters;
	cout<<"How many Daughters he had: ";
	cin>>daughters;
	cout<<"How many Sons he had: ";
	cin>>sons;
	double pershare = remaining_assets/((0.5*daughters)+sons);
	double one_daughters_share = 0.5 * pershare;
	double one_sons_share = pershare;
	cout<<"Daughter's share is "<<daughters*one_daughters_share<<endl;
	cout<<"Son's share is "<<sons*one_sons_share<<endl;
	
	return 0;
}