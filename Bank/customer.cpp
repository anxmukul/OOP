#include "customer.h"
#include "address.h"
#include <bits/stdc++.h>
using namespace std;
void Customer::setPermanentAddress(string a, string b, string c, string d, string e)
    {
        permanent_address = new Address(a, b, c, d, e);
        cout << "address set" << permanent_address->getAddress();
    }
void Customer::setPresentAddress(string a, string b, string c, string d, string e)
    {
        present_address = new Address(a, b, c, d, e);
    }
 void Customer::showAddress()
    {
        if (permanent_address)
        {
            cout << "\nPermanent Address::\n";
            cout << permanent_address->getAddress();
        }
        if (present_address)
        {
            cout << "\nPresent Address::\n";
            cout << present_address->getAddress();
        }
    }
void Customer::showDetails()
    {
        cout << "\nCustomer Id:\t" << id << "\nName:\t" << name << "\nbalance:\t" << balance << endl;
    }
void Customer::showDetailsWithAddress()
    {
        showDetails();
        showAddress();
    }
void Customer::deposit(int x)
    {
        balance += x;
        showDetails();
    }