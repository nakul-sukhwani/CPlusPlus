#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Parent {
    public:
    void show(){
        cout<<"parent class show";
    }
};
class Child : public Parent {
public:
void show (){
    cout<<"Child Class show";
}
};
int main(){
Child c1;
c1.show();
    return 0;
}