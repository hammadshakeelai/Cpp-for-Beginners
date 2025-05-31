#include <iostream>
using namespace std;
class Box{
    private:
        double length;
        double breadth;
        double height;
    public:
        Box(){
            length = 0;
            breadth = 0;
            height = 0;
        }
        Box(double length, double breadth, double height){
            this->length = length;
            this->breadth = breadth;
            this->height = height;
        }
        friend Box operator+(Box box1, Box box2);
        friend void display(Box box);
};
Box operator+(Box box1, Box box2){
            Box box;
            box.length = box1.length + box2.length;
            box.breadth = box1.breadth + box2.breadth;
            box.height = box1.height + box2.height;
            return box;
}
void display(Box box){
            cout<<"Length: "<<box.length<<endl;
            cout<<"Breadth: "<<box.breadth<<endl;
            cout<<"Height: "<<box.height<<endl;
}

int main(){
    Box box1(10, 20, 30);
    Box box2(40, 50, 60);
    Box box3 = box1 + box2;
    display(box3);
    return 0;
}