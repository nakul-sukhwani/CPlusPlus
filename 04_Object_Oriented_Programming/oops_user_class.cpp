#include<iostream>
#include<vector>
#include<string>
using namespace std;
class User{
    private:

    int id;
    string password;

    public:
    User(int id){
        this->id = id;
    }
    string username;
//setters 
void set_password(string password){
    this->password = password; 
}
    //getter
string get_password(){
    return password;
}
    
};
int main(){
    User u1(101);
    u1.username = "nakul-sukhwani";
    u1.set_password("Nakul19");
    cout<<"username : "<<u1.username<<endl;
    cout<<"password : "<<u1.get_password()<<endl;

    return 0; 
}