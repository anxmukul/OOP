#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    static int total;
    string name;
    int roll;
    double percentage;
    string class_teacher;
    string sport;

public:
    student(string n, double p, string s, string ct = "")
    {
        cout << "Parametrisec constructor called\n";
        total += 1;
        name = n;
        roll = total;
        percentage = p;
        sport = s;
        class_teacher = ct;
    }
    student(student &o)
    {
       // total += 1;
        cout << "Copy constructor called\n";
        class_teacher = o.class_teacher;
        name = o.name;
        //roll = total;       // Here we are not copying roll from any class;
        roll = o.roll;
        percentage = o.percentage;
        class_teacher = o.class_teacher;
        sport = o.sport;
    }
    void get_details()
    {
        cout << "Name = " << name << "\n";
        cout << "Roll no. = " << roll << "\n";
        cout << "Percentage = " << percentage << "\n";
        cout << "Sports = " << sport << "\n";
        cout<< "Class teacher = " << class_teacher << "\n";
        cout << "\n";
    }
};
int student::total;
int main()
{
    student s1("Alex", 67.89, "Cricket", "Prakash Sahu");
    s1.get_details();
    student s2("Manraj", 76.98, "Footbaal");
    s2.get_details();
    student s3 = s1;
    s3.get_details();
    return 0;
}