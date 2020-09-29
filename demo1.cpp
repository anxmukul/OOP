#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
protected:
    int roll;
public:
    double percentage;
    string sport;

public:
    void set_details(string n, int r, double p, string s)
    {
        name = n;
        roll = r;
        percentage = p;
        sport = s;
    }
    void get_details()
    {
        cout << "Name = " << name << "\n";
        cout<< "Roll no. = " << roll << "\n";
        cout << "Percentage = " << percentage << "\n";
        cout<< "Sports = " << sport << "\n";
    }
    void change_name(string s);
    void change_roll(int r);
};
void student::change_name(string rename){
    name = rename;
}
void student::change_roll(int r){
    roll = r;
}
int main()
{
    student s1;
    s1.set_details("Alex", 12, 67.89, "Cricket");
    s1.get_details();
    s1.percentage = 46.23;
    s1.sport = "Football";  //As the data members are public we can access outside class scope
    cout<<"After changing percentage and sports of student s1\n";
    s1.get_details();
    //s1.name = "Alexa Puchoa"     //We canot access Private data member outside the class scope 
    //s1.roll = 14                  //Also protected data membet canot be accessed outside class scope.
    s1.change_name("Alexa Puchoa");
    s1.change_roll(17);
    cout<<"After changing name and roll through fuction defined outside the class\n";
    s1.get_details();
    return 0;
}
