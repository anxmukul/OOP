#include <bits/stdc++.h>
using namespace std;
class Time{
    private:
        int hr;
        int min;
        int sec;
    public:
    Time(int h=0, int m=0, int s=0){
        hr = h;
        min = m;
        sec = s;
    }
    Time operator+(Time const &time){
        int carry_min = 0, carry_hr = 0;
        Time total;
        total.hr = hr + time.hr;
        total.min = min + time.min;
        if(total.min >= 60){
            carry_hr = total.min/60;
            total.min -= (carry_hr*60);
            total.hr += carry_hr;
        }
        total.sec = sec + time.sec;
        if(total.sec >= 60){
            carry_min = total.sec/60;
            total.sec -= (carry_min * 60);
            total.min += carry_min;
        }
        return total;
    }
    Time operator-(Time const &time){
        Time total;
        int carry_min = 0, carry_hr = 0;
        //total.sec = sec - time.sec; calculating second first
        if(sec < time.sec){
            total.sec = (sec+60) - time.sec;
            carry_min = -1;
        }
        else{
            total.sec = sec - time.sec;
        }
        //total.min = min - time.min;
        min = min - carry_min;     //Subtracting -1 if sec is less than time.sec
        if(min<time.min){
            total.min = (min+60) - time.min;
            carry_hr = -1;
        }
        else{
            total.min = min - time.min;
        }
        hr = hr - carry_hr;  
        total.hr = hr - time.hr;    //Subtracting -1 if min is less than time.min
        if(total.hr < 0){
            total.hr = total.hr*(-1);
        }
        return total;
    }
    void print(){
        cout<<hr<<"hr "<<min<<"min "<<sec<<"sec\n";
    }
};
int main(){
    int x, y, z;
    cout<<"Enter hour, min, sec\n";
    cin>>x>>y>>z;
    Time t1(x, y, z);
    cout<<"Enter hour, min, sec\n";
    cin>>x>>y>>z;
    Time t2(x, y, z);
    Time t = t1 + t2;
    Time s = t1 - t2;
    t.print();
    s.print();
    return 0;
}