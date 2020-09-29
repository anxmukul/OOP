#include <bits/stdc++.h>
using namespace std;
/*int add(int a, int b = 0){
    cout<<"Function with 2 parameter called\n";
    return a+b;
}
int add(double a, int b=0, int c=0){
    cout<<"Function with three parameter called\n";
    return a+b+c;
}
int main(){
    cout<<add(10)<<endl;
    cout<<add(10, 20)<<endl;
    cout<<add(10, 20, 30)<<endl;
    cout<<add(10, 20, 'c')<<endl;
    cout<<add(10.7,'c')<<endl;
    return 0;
}*/
class Add{
    private:
    int a;
    int b;
    public:
    Add(){    
    }
    int get_result(double x, double y){
        cout<<"Function with both Int parameter is called\n";
        return x+y;
    }
    int get_result(double x, int y){
        cout<<"Function with different Parameter type called\n";
        return x+y;
    }
    /*int get_result(double m, double n){   //  Overriden function
        return m+n;
    } */   
};
int main(){
    Add a;
    cout<<a.get_result(30, 40)<<endl;
    cout<<a.get_result(23, 24.6)<<endl;
    cout<<a.get_result(23.6, 76.9)<<endl;
    return 0;
}