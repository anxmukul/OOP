#include <bits/stdc++.h>
using namespace std;
class Account{
protected:
    string name;
    int id;
public:
    void display(){
        cout<<"name: "<<name<<endl;
        cout<<"id: "<<id<<endl;
    }
};
class Programmer:public Account{
    protected:
        string Language;
        string Cetification;
    public:
        void code(){
            cout<<"Practicing coding on codechef\n";
        }
        void set_details(string n, int i, string x, string y){
            cout<<"set_details() of programmer is called\n";
            name = n;
            id = i;
            Language = x;
            Cetification = y;
    }
};
class Beginner:public Programmer{
    protected:
        string basic_things;
    public:
    void set_details(string n, int i, string x){
        cout<<"set_details() of Beginner is called\n";
        name = n;
        id = i;
        Language = x;
    }
        void study(){
            cout<<"Busy in studing academics\n";
        }
};
int main(){
    Beginner s;
    s.set_details("Priyanshu", 78, "c");
    s.display();
    s.study();
    s.code();
    Programmer P;
    P.code();
    P.display();    //As nothing is set it will print garbage value;
    P.set_details("Abhisek", 053, "C++", "Android, Kotlin");
    P.display();
    return 0;
}
//Even if both set_details fuction have same number of parameter and same type and object will call there function only 