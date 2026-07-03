#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Complex{
    int real;
    int img;
    public:
    Complex(int r , int i ){//parametarized constructor;
        real = r;
        img = i;
    }
    void showNum(){
        cout<<real<<" + "<<img<<"i\n";
    }
    
    Complex operator + (Complex &c2){//here it is operator overloading in time of compilation ! 
        int resreal = this->real + c2.real;
        int resimg = this->img + c2.img;
        Complex c3(resreal , resimg);
       return c3;
    
    
}
   
};
int main(){
  Complex c1(1,2);
  Complex c2(3,4);
  Complex c3 = c1+c2;//Here the inheritance took place 

c1.showNum();
c2.showNum();
c3.showNum();
    return 0;
}