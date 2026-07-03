#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Shape{//Abstract class -> It is used to hide parts of data , but can also be use to show impt parts 
    public:
    virtual void draw() = 0;
};
class Circle : public Shape{
    public:
    void draw(){
        cout<<"Draw Circle\n";
    }
}; 
class Square : public Shape {
    public:
    void draw(){
        cout<<"Draw Square\n";
    }
};

int main (){ 
    Circle cir1;
    cir1.draw();
    Square sq1;
    sq1.draw();
    return 0;
}