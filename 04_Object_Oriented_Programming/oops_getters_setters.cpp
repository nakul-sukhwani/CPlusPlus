#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Student{
    string name;
    float cgpa;// this info is in private access modifier - can only be called by class 
    public:// Use of access modifiers - public 
    void get_percent(){
        cout<<(cgpa*10)<<"%\n";
    }
    //Setters 
    void setname(string name_val){
        name = name_val;
    }
    void set_cgpa(float cgpa_val){
        cgpa = cgpa_val;
    }

    //Getters 
    string get_name(){
        return name;
    }
    float get_cgpa(){
        return cgpa;
    }
};
int main(){
    Student s1;
    s1.setname("Nakul Sukhwani");
    s1.set_cgpa(7.49);
    cout<<s1.get_name()<<"\n";
    cout<<s1.get_cgpa()<<endl;
   
    return 0; 
}