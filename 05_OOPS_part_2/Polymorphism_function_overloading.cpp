#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Print{
    public:
    int show(int n){// this is an example of polymorphism (function overloading - ek hi name ke 2 functions but returns diff results ! )
        cout<<"integer : "<<n<<endl;
    }
    string show (string str){
        cout<<"string : "<<str<<endl;
    }
};
int main(){
    Print p1;
    p1.show(25);
    p1.show("Nakul Sukhwani");
    return 0;
}