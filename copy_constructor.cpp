#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int roll;
    double percentage;
    string sport;

public:
    student(){
        cout<<"Default Constructor called\n";
    }
    student(string n,int r, double p, string s)
    {
        cout<<"Parmetrised constructor called\n";
        name = n;
        roll = r;
        percentage = p;
        sport = s;
    }
    student(const student &s){
        cout<<"Copy Constructor Called\n";
        name = s.name;
        roll = s.roll;
        percentage = s.percentage;
        sport = s.sport;
    }
    ~student(){
        cout<<"Destructor is called\n";
    }
    void get_details()
    {
        cout << "Name = " << name << "\n";
        cout << "Roll no. = " << roll << "\n";
        cout << "Percentage = " << percentage << "\n";
        cout << "Sports = " << sport << "\n";
        cout << "\n";
    }
};
int main(){
    student s1("Abhimanyu", 23, 45.09, "Cricket");
    s1.get_details();
    student s2 = s1;
    student s3;
    s3 = s1;    // Here copy constructor is not called.
    s2.get_details();
}
//C++ will create default copy constructor if we donot create.
//But in default only shallow copy is done. For deep copy we need user define copy constructor.
//We make copy constructor argument const so that objects are not acciendently modified.