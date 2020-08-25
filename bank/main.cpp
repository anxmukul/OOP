#include "bank.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    int i;
    Bank n1;
    cout<<"1. To add a customer.\t2. Update Balance.\n3. Change Account Type.\t4. Enter anyother digit to exit the Program.\n";
    while(1>0){
        cout<<"Enter your choice\n";
        cin>>i;
        if(i == 1){
            n1.add_a_customer();
           //return;
        }else if(i == 2){
            n1.update_balance();
            //return;
        }else if(i == 3){
            n1.change_type();
        }else{
            break;
        }
    }
    return 0;
}