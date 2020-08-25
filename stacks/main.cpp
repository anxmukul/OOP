#include "stacks.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Stack n1, n2;
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
    int n,c,s;
    cout<<"0.) To exit\n1.) To insert an element\n2.) To pop an element\n3.) To get top element\n4.) To get all elements\n5.) To get the length of the stacks\n";
    while(1>0){
        cout<<"In which stack you want to perform the operations:\n";
        cin>>s;
        cout<<"Enter number of your choice:-\n";
        cin>>n;
        if(n == 1){
            cout<<"Enter a number number to push in stack\n";
            cin>>c;
            if(s == 1){
                n1.push_an_integer(c);
            }else{
                n2.push_an_integer(c);
            }
        }else if(n == 2){
            if(s == 1){
                n1.pop_an_integer();
            }else{
                n2.pop_an_integer();
            }
        }else if(n == 3){
            if(s ==1 ){
                cout<<n1.get_top_element()<<endl;
            }else{
                cout<<n2.get_top_element()<<endl;
            }
        }else if(n == 4){
            if(s ==1){
                n1.Print_all_element();
            }else{
                n2.Print_all_element();
            }
        }else if(n == 5){
            if(s == 1){
                cout<<n1.length_of_stack()<<"\n";
            }else{
                cout<<n2.length_of_stack()<<"\n";
            }
        }else if(n == 0){
            break;
        }else{
            cout<<"Error: Invalid Input\n";
            break;
        }
    }
    

}
