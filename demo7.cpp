#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    static int total;
    string name;
    int roll;
    double percentage;
    string sport;

public:
    void set_details(string n, double p, string s)
    {
        total += 1;
        name = n;
        roll = total;
        percentage = p;
        sport = s;
    }
    void get_details()
    {
        cout << "Name = " << name << "\n";
        cout << "Roll no. = " << roll << "\n";
        cout << "Percentage = " << percentage << "\n";
        cout << "Sports = " << sport << "\n";
        cout << "\n";
    }
    friend class teacher; //Teacher class id friend class of student
};
int student::total; //Initializing static member outside class;
class teacher
{
private:
    string name;
    int class_teacher;

public:
    void set_details(string s, int c)
    {
        name = s;
        class_teacher = c;
    }
    void top_student(student &t)
    {
        t.get_details();
    }
    void top_student_percentage(student &t)
    {
        cout << "Percentage of first student\t" << t.percentage << endl; //It can access private member of student class;
    }
};
int main()
{
    student s1;
    s1.set_details("Alex", 67.89, "Cricket");
    student s2;
    s2.set_details("Amelia", 98.09, "Volleyball");
    student s3;
    s3.set_details("Manraj Singh", 78.89, "Football");
    teacher t1;
    t1.set_details("Bijan Ptel", 11);
    t1.top_student(s1);
    t1.top_student_percentage(s1);
    return 0;
}