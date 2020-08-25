#include "bank.h"
#include<bits/stdc++.h>
using namespace std;
void Bank::add_a_customer(){
    cout<<"Enter the customer id:-\n";
    cin>>id;
    cout<<"Enter the account number of 5 digits:-\n";
    cin>>account_id;
    cout<<"Enter the account type:-\n";
    cout<<"Notice:\nEnter S for Saving account.\nEnter C for current account.\n";
    cin.ignore();
    cin>>type;
    cout<<"Enter the amount:-\n";
    cin>>balance;
    //return;
}
void Bank::update_balance(){
    cout<<"Enter the amount:-\n";
    int n = return_balace();
    cin>>balance;
    balance = balance + n;
    cout<<"Blance Updated\n";
    
}
void Bank::change_type(){
    if(type == 'S'){
        type = 'C';
    }else{
        type = 'S';
    }
    cout<<"Account type changed to\n"<<type<<endl;
    return;
}