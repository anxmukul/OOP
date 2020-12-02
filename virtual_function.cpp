#include <bits/stdc++.h>
using namespace std;
class Base{
    public:
    virtual void Print(){
        cout<<"Print Base class details\n";
    }
    // void show(){
    //     cout<<"Show Base class Details\n";
    // }
};
class Derived: public Base{
    // public:
    // void Print(){
    //     cout<<"Print Derived class details\n";
    // }
    // void show(){
    //     cout<<"Show Derived class Details\n";
    // }
};
int main(){
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->Print();
   // ptr->show();    //Non-virtual function early binding occur; 
    return 0;
}
