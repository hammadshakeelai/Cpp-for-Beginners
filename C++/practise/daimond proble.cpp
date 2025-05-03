#include<iostream>
using namespace std;
//struct
class furniture {
    public:
     
     void sleepOnIt(){
         cout<<"sleeping on furniture \n";
     }
};
class sofa :virtual public furniture {};
class bed : virtual public furniture {};
class sofacombed : public sofa, public bed{};
int main (){
    sofacombed L_shape_sofa;
    L_shape_sofa.sleepOnIt();
    return 0;
}