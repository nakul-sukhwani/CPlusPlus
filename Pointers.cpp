#include<iostream>
using namespace std;
    
// void multipleBy2(int &a ,int &b , int &c){
//     a*=2;
//     b*=2;
//     c*=2;
// }
int main(){
    // practice Question 1 -> What will ptr2 print in following code 
    // int x = 5;
    // int y = 10;
    // int *ptr1 = &x , *ptr2 = &y;
    // ptr2 = ptr1 ;
    // cout<< ptr2 << endl;
    // cout<< ptr1 << endl;
    // Q2 -> What is the type of a and b ?
    // float *a ,b;
    // Q3 -> Can we initialize a ptr with 0 ? 
    // int *ptr = 0;
    // cout<<ptr<<endl;
    // it is same as creating a NULL ptr <-(answer)
    
    // Assignment Questions 
    // Q1 What will be the output of following code ? 
    // {
        // int x;
        // int *ptr ;
        // x = 7;
        // ptr = &x;
        // cout<<*ptr<<endl;
// Q2.
// int x = 1 ,y = 2,z = 3; 
// multipleBy2(x,y,z);
// cout<<x<<y<<z<<endl;
// Q3.
    int a = 32;
    int *ptr = &a;
    char ch = 'A';
    char &cho = ch;
    cho += a;
    *ptr += ch;
    cout<<a<<','<<ch<<endl;
    return 0;
} 