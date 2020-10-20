#include <bits/stdc++.h>
using namespace std;
class A {
    protected:
    int a;
    public:
    A(){
        cout<<"Constructor of A\n";
    }
    void Display(){
        cout<<"A's Display()\n";
    }
};
class B {
    protected:
    int b;
    public:
    B(){
        cout<<"Constructor of B\n";
    }
    void Display(){
        cout<<"B's Display\n";
    }
};
class C:public A, public B {
    protected:
    int c;
    public:
    C(){
        cout<<"Constructor of C\n";
    }
    void View(){
    //    cout<<"C's Display\n";
        B::Display();
        A::Display();
    }
};
int main(){
    C c;
    //c.Display();      Display is Ambiguous;
    //c.View();
    c.A::Display();
    c.B::Display();
      return 0;
}
//Ambiguity can be resolved named instance within the derived class, using the scope resulution operator;