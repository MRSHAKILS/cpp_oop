#include<iostream>
using namespace std;

class Student
{
    public:
    int id;
    double cgpa;

    void display()
    {
        cout <<"id & cgpa: " << id << " " << cgpa << endl;
    }

    void setValue(int x, double y)
    {
        id = x;
        cgpa = y;
    }
};





int main(){

    Student Ali, bunny;

    Ali.setValue(202, 2.80);
    Ali.display();

    bunny.setValue(302, 3.40);
    bunny.display();


}
