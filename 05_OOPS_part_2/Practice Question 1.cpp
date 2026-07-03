#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Complex {
    int real;
    int img;
    public: 
    Complex(int r , int i){
    real = r; 
    img = i;
    }
    void showNum(){
        cout<<real<<" + "<<img<<"i\n";
    }
    Complex operator - (Complex &c2){
        int resReal = this->real - c2.real;
        int resimg = this->img - c2.img;
        Complex c3 (resReal , resimg);
        return c3;
    }
        
 };
 int main (){
    Complex c1(2,4);
    Complex c2(1,3);
    Complex c3 = c1-c2;
    c1.showNum();
    c2.showNum();
    c3.showNum();
 }
