#include "address.h"
#include "customer.h"
#include "bank.h"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Bank bank;
    bank.describeAllCustomers();
    while (true)
    {
        cout << "set address\n";
        bank.setAddressForCustomer();
        bank.describeAllCustomersInDetail();
        cout<<"deposit cash: enter cutomer id, amount";
        int x, y;
        cin>>x>>y;
        bank.depositCash(x, y);
    }
}