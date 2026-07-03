#include<iostream>
#include<vector>
#include<string>
using namespace std;
class BankAccount {
    private : 
    int accountNumber;
    float balance ;
    friend void getBalance(BankAccount &obj);

    public: 
    void deposit(float Amnt){
        balance = balance+Amnt;
    }

    void withdraw(float Amnt){
        balance = balance - Amnt;
    }

 };
  void getBalance(BankAccount &obj){
        cout<<obj.balance<<endl;
    }
 int main (){
    BankAccount b1;
    b1.deposit(400.50);
    getBalance(b1);
    b1.withdraw(500.789);
    getBalance(b1);
   return 0;
 }

