#include<iostream>
using namespace std;
class student
{
    int marks;
    std::string name;

    public:
        student()
        {
            marks = 0;
            name = "unknown";
        }
        student(int marks, std::string name)
        {
            this->marks = marks;
            this->name = name;
        }
        friend class worker;
};
class worker{
    public:
        void display(const student& st){
            cout << st.name << ": " << st.marks << endl;
        }
};
int main(){
    student student1;
    worker teacher;
    teacher.display(student1);
    return 0;
}