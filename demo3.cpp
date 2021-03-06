// Friends Function of a class
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
    static void no_of_students()
    {                                                              //Static member function to get total no. of students
        cout << "Total number of students are\t" << total << endl; //It can't access non static data member;
    }
    friend void get_name(student s);
};
void get_name(student s)
{
    cout<<"Name of S3 student is\t"<<s.name<<endl; //It can access the private member of class also.
}
int student::total;
int main()
{
    student s1;
    s1.set_details("Alex", 67.89, "Cricket");
    s1.get_details();
    student s2;
    s2.set_details("Amelia", 98.09, "Volleyball");
    s2.get_details();
    student s3;
    s3.set_details("Manraj Singh", 78.89, "Football");
    s3.get_details();
    get_name(s3); //Change name is friend function called normaaly not by object.
    student::no_of_students();
    return 0;
}