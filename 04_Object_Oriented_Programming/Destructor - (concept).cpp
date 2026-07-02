#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Car{
    public:
    string name;
    string color;
    int* mileage;
    Car(string name, string color){
        this->name = name; 
        this->color = color;
        mileage = new int;
        *mileage = 12;
    }
    Car(Car &orignal){//custom copy constructor 
        cout<<"copying to new\n";
        name = orignal.name;
        color = orignal.color;
        mileage = new int;
        *mileage = *orignal.mileage;
    }

    ~Car(){
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
            cout<<"deleting Object...";
        }
    }
};
    
int main(){
    Car c1("Kia Sonnet" , "Black");
     
    cout<<c1.name<<endl;
    cout<<c1.color<<endl;
    cout<<c1.mileage<<endl;

    
    return 0; 
}