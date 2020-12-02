#include <bits/stdc++.h>
using namespace std;
class traingle{
    protected:
    int area;
    public:
    virtual void areas(){
        cout<<"Area of traingle\t"<<area<<endl;
    }
    virtual void calculate(){};
};
class euilateral:public traingle{
    private:
    int a;
    public:
    void calculate(int s){
        a =s;
        area = (sqrt(3)*a*a)/4;
    }
    void areas(){
        cout<<"Area of traingle is\t"<<area<<endl;
    }
};
class scalen: public traingle{
    private:
    int a;
    int b;
    int c;
    public:
    void calculate(int s1, int s2, int s3){
        a =s1; 
        b = s2;
        c = s3;
        int sa = (a+b+c)/2;
        int s = sa*(sa-a)*(sa-b)*(sa-3);
        area = sqrt(s);
    }
    void areas(){
        cout<<"Area of traingle\t"<<area<<endl;
    }
};
class issoceles:public traingle{
    private:
    int a;
    int b;
    public:
    void calculate(int s1, int s2){
        a = s1;
        b = s2;
        area = ((sqrt((a*a) - (b*b))/4)*b)/2;
    }
    void areas(){
        cout<<"Area of traingle\t"<<area<<endl;
    }
};
int main(){
    euilateral e;
    e.calculate(4);
    e.areas();
    scalen s;
    s.calculate(3,4,5);
    s.areas();
    issoceles i;
    i.calculate(6,2);
    i.areas();
    return 0;
}