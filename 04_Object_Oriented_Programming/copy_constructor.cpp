#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Car{
    public:
    string name;
    string color;
    Car(string name, string color){
        this->name = name; 
        this->color = color;
    }
    Car(Car &orignal){//custom copy constructor 
        cout<<"copying to new\n";
        name = orignal.name;
        color = orignal.color;
    }
};
    
int main(){
    Car c1("Kia Sonnet" , "Black");
    Car c2(c1);//copy constructor taking place 
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;
    
    return 0; 
}