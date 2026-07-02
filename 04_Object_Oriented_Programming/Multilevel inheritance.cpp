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
class Whale : public Fish {// here is eg: of Multi level inheritance !
    public: 
    void Mammal(){
        cout<<"Whale is a Mammal\n";
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

cout<<"---multilevel inheritance---\n";

Whale w1;
w1.breath();
w1.eat();
w1.swim();
w1.Mammal();
    return 0; 
}