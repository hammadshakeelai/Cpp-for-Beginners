#include <iostream>
using namespace std;

int main() {
    int total;
    for (int h = 0; h <= 1;h++){
        for (int i = 0; i <= 1; i++){
            for (int j = 0; j <= 1; j++){
                for (int k = 0; k <= 1; k++){
                    total = h*8 + i*4 + j*2 + k;
                    if(total==10){
                        cout << h << i << j << k << " is equal to number " << "A\n";
                    }
                    else if(total==11){
                        cout << h << i << j << k << " is equal to number " << "B\n";
                    }
                    else if(total==12){
                        cout << h << i << j << k << " is equal to number " << "C\n";
                    }
                    else if(total==13){
                        cout << h << i << j << k << " is equal to number " << "D\n";
                    }
                    else if(total==14){
                        cout << h << i << j << k << " is equal to number " << "E\n";
                    }
                    else if(total==15){
                        cout << h << i << j << k << " is equal to number " << "F\n";
                    }
                    else{
                    cout << h << i << j << k << " is equal to number " << total << "\n";}
                }
            }
        }
    }
    return 0;
}