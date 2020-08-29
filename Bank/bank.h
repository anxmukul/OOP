#ifndef BANK_H
#include "customer.cpp"
//#include "address.h"
#include <bits/stdc++.h>
using namespace std;
class Bank{
    private:
        vector<Customer> customer_ary;
        int size;
        public:
    Bank(){
        cout << "How many customers you want to start with\n";
        cin >> size;
        for (int i = 0; i < size; i++){
            string x;
            int y;
            cout << "Enter detail for cusotmer no " << i + 1 << endl;
            cout << "Enter name \n";
            cin >> x;
            cout << "Enter starting balance:\n";
            cin >> y;
            Customer c(i + 1, x, y);
            customer_ary.push_back(c);
        }
    }
    void describeAllCustomers();
    void describeAllCustomersInDetail();
    void setAddressForCustomer();
    void depositCash(int customer_id, int amount);
    void withdrawcash(int customer_id, int amount);
    
};
#endif