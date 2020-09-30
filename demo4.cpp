#include <bits/stdc++.h>
using namespace std;
class Sports;
class Academics
{
private:
    float cgpa;
    float sgpa;
public:
    void set_result(float c, float s)
    {
        cgpa = c;
        sgpa = s;
    }
    void get_result(){
        cout<<"CGPA:\t"<<cgpa<<"\n"<<"SGPA:\t"<<sgpa<<endl;
    }
    friend void mean(Academics, Sports);    //Declared in side First class.
};
class Sports{
private:
    float point;
public:
    void set_point(float p){
        point = p;
    }
    void get_point(){
        cout<<"Total Point in Sports\t"<<point<<endl;
    }
    friend void mean(Academics, Sports);    //Order of argument should be same while in declaring in second class also.
};
void mean(Academics a, Sports s){
    float total = a.cgpa + s.point;
    cout<<"Mean of Sports and Academic Performance is\t"<<total<<endl;
}
int main(){
    Academics s1;
    s1.set_result(9.8, 7.5);
    s1.get_result();
    Sports S1;
    S1.set_point(9.6);
    S1.get_point();
    mean(s1, S1);
    return 0;
}