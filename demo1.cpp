#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int roll;
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
};
int main()
{
    student s1;
    s1.set_details("Alex", 12, 67.89, "Cricket");
    s1.get_details();
    s1.percentage = 46.23;
    s1.sport = "Football";  //As the data members are public we can access outside class scope
    cout<<"After changing percentage and sports of student s1\n";
    s1.get_details();
    return 0;
}
