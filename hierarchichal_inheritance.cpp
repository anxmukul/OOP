#include<bits/stdc++.h>
using namespace std;
class Shape{
    protected:
    int a, b;
    public:
    void set_data(int m, int n){
        a = m;
        b = n;
    }
};
class rectangle:public Shape{
    public:
    int get_area(){
        return a*b;
    }
    int get_perimeter(){
        return 2*(a+b);
    }
};
class traingle:public Shape{
    public:
    int get_area(){
        return (a*b)/2;
    }
    int get_perimeter(){
        int h = sqrt(a*a + b*b);
        return (a+b+h);
    }
};
int main(){
    traingle t1;
    rectangle r1;
    int l, b;
    cout<<"Enter length and breadth of rectangle\n";
    cin>>l>>b;
    r1.set_data(l,b);
    cout<<"Area of rectangle\t"<<r1.get_area()<<endl;
    cout<<"Perimeter of rectangle\t"<<r1.get_perimeter()<<endl;
    cout<<"Enter base and higth of triangle\n";
    cin>>l>>b;
    t1.set_data(l,b);
    cout<<"Area of triangle\t"<<t1.get_area()<<endl;
    cout<<"Perimeter of triangle\t"<<t1.get_perimeter()<<endl;
    return 0;
}