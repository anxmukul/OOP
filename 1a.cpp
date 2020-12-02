#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
        int id;
        string name;
    public:
        void getData(int num){
            cout<<"Enter the Name:";
            getline(cin,name);
            id = num;
        }
        void showData(){
            cout<<"\nEmployee id:"<<id<<endl;
            cout<<"Employee Name:"<<name<<endl;
        }
};
int main(){
    Employee data[5];
    for(int i=0;i<5;i++){
        data[i].getData(i+1);
    }
    for(int i=0;i<5;i++){
        data[i].showData();
    }
    return 0;
}