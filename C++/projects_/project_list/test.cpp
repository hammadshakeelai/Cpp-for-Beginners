#include<iostream>
#include <string>
using namespace std;

class Auto{
    private:
        int var1 = 0;
        double var2 = 0.0;
        char var3 = 0;
        string var4 = "";
        int _case = 0;
        
    public:
        Auto(int number) {
            var1 = number;
            _case = 1;
        }
        Auto(double number){
            var2 = number;
            _case = 2;

        }
        Auto(char letter){
            var3 = letter;
            _case = 3;

        }
        Auto(string text){
            var4 = text;
            _case = 4;

        }
        void print(){
            switch(_case){
                case 1:
                    cout << var1 << endl;
                    break;
                case 2:
                    cout << var2 << endl;
                    break;
                case 3:
                    cout << var3 << endl;
                    break;
                case 4:
                    cout << var4 << endl;
                    break;
                default:
                    cout << 0 << endl;
            }
        } 
};
int main(){
    Auto Num(8);Num.print();
    Auto num('w');num.print();
    
    return 0;
}
