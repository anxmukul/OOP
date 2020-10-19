#include <bits/stdc++.h>
using namespace std;
class Account{
private:
    string name;
    int id;
public:
    void set_details(string n, int i){
        name = n;
        id = i;
    }
    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
};
class Student:public Account{
    public:
        int fee;
        string address;
};
int main(){
    Student s1;
    s1.set_details("Abhimanyu", 053);       //Member functions are inherited
    s1.fee = 2300;
    s1.address = "Allahabad UP";
    s1.display();
    cout<<"s1.fee:\t"<<s1.fee<<endl;
    cout<<"s1.address:\t"<<s1.address<<endl;
    return 0;
}
//Private member are not inheritable we can access private data by member function.