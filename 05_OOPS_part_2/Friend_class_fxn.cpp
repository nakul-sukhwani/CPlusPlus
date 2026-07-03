#include<iostream>
#include<vector>
#include<string>
using namespace std;
class A{
    string secret = "Private information";
    friend class B;//it gives access to pvt info to friend class ;
    friend void disclose(A &obj);//it gives access to pvt info to friend fxn;
};
class B{
    public:
    void showSecret(A &obj){
        cout<<"Secret from class : "<<obj.secret<<endl;  
    }
};
void disclose(A &obj){
    cout<<"Secret from function : "<<obj.secret<<endl;
}
int main (){ 
A a1;
B b1;
b1.showSecret(a1);
disclose(a1);


    return 0;
}