#include "stacks.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Stack n1;
    /*
    for(int i = 0; i<6; i++){
        n1.push_an_integer(i*2);
    }
    cout<<"Top element\t"<<n1.get_top_element()<<"\n";
    cout<<"Length of stacks\t"<<n1.length_of_stack()<<"\n";
    for (int i = 0; i < 8; i++)
    {
        n1.push_an_integer(i*3);
    }
    cout<<"Now the length of stacks\t"<<n1.length_of_stack()<<"\n";
    cout<<"Top element\t"<<n1.get_top_element()<<"\n";
    n1.pop_an_interger();
    cout<<"Top element\t"<<n1.get_top_element()<<"\n";
    n1.Print_all_element();*/

    int n,c;
    cout<<"0.) To exit\n1.) To insert an element\n2.) To pop an element\n3.) To get top element\n4.) To get all elements\n5.) To get the length of the stacks\n";
    while(1>0){
        cout<<"Choose any number\n";
        cin>>n;
        if(n == 1){
            cout<<"Enter a number number to push in stack\n";
            cin>>c;
            n1.push_an_integer(c);
        }else if(n == 2){
            n1.pop_an_integer();
        }else if(n == 3){
            cout<<n1.get_top_element()<<endl;
        }else if(n == 4){
            n1.Print_all_element();
        }else if(n == 5){
            cout<<n1.length_of_stack()<<"\n";
        }else if(n == 0){
            break;
        }else{
            cout<<"Error: Invalid Input\n";
            break;
        }
    }
    

}
