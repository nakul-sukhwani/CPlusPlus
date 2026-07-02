#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Teacher {
    public:
    int Salary;
    string subject;
};
class Student{
public:
int roll_no;
float cgpa;
};
class TA : public Teacher , public Student{//with this we can use multiple inheritance
    public:
    string name;
};
int main(){
    TA t1;
    t1.name = "Nakul Sukhwani";
    t1.cgpa = 7.49;
    t1.Salary = 20000;
    t1.subject = "Discrete maths";
    t1.roll_no = 1250439278;
    cout<<t1.name<<endl;
    cout<<t1.roll_no<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.cgpa<<endl;
    cout<<t1.Salary<<endl;
    return 0;
}