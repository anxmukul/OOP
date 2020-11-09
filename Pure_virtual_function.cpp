#include<bits/stdc++.h>
using namespace std;
/*class Test
{
int x;
public:
virtual void show() = 0;
int getX() { return x; }
};
int main(void)
{
Test t;     // canot create a object of pure virtual class/abstract class.
return 0;
}*/
class Base{
    public:
    virtual void Print() = 0;
    virtual void Display()
    {
    cout<<"\n\tThis is Display() method of Base Class\n";
    }
};
class Derived: public Base{
    public:
    void Print(){
        cout<<"Print Derived class details\n";
    }
    // void Display(){
    //     cout<<"In Dispaly() of Derived class\n";
    // }
};
int main(){
    Base *ptr;
    Derived d;  
    d.Display();    //Member function of abstract class can be access by derived class objects
    ptr = &d;
    ptr->Print();
    ptr->Display();
    return 0;
}
