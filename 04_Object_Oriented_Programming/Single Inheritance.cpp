#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Animal{
    public:
    string color;
    void breath(){
        cout<<"breathes---"<<endl;
    }
    void eat(){
        cout<<"Eats---"<<endl;
    }

};
class Fish : public Animal{ //this shows Here the inheritance happening over here! 
    public:
    int fins;
    void swim(){
        cout<<"swims---\n";
    }
};

int main(){
Fish f1;
f1.fins = 2;
cout<<f1.fins<<endl;
f1.swim();
f1.breath();
f1.eat();
f1.color = "Blue";
cout<<f1.color<<endl;
    return 0; 
}