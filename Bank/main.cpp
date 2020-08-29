//#include "address.h"
//#include "customer.h"
#include "bank.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Bank bank;
    bank.describeAllCustomers();
    while (true)
    {
        cout << "\nSet address\n";
        bank.setAddressForCustomer();
        bank.describeAllCustomersInDetail();
        cout<<"\nDeposit Cash: Enter cutomer id and amount:\n";
        int x, y;
        cin>>x>>y;
        bank.depositCash(x, y);
        //bank.describeAllCustomersInDetail();
        cout<<"\nWithdrawl Cash: Enter customer id and amount:\n";
        int i, a;
        cin>>i>>a;
        bank.withdrawcash(i, a);
        //bank.describeAllCustomersInDetail();
    }
    return 0;
}