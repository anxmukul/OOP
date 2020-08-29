// Customer header file
#ifndef CUSTOMER_H
#include "address.cpp"      // here we are includeing .cpp not .h file because cpp brings .h file with it but .h file donot do so.
#include <bits/stdc++.h>
using namespace std;
class Customer{
    private:
    string name;
    int id;
    Address *permanent_address;
    Address *present_address;
    int balance;   
    public:
    Customer() {}
    Customer(int x, string n, int y){
        name = n;
        balance = y;
        id = x;
        permanent_address = NULL;       // If nothing provided then set the address to NULL
        present_address = NULL;         // If nothing provided then set the address to NULL
    }
    void setPermanentAddress(string a, string b, string c, string d, string e);
    void setPresentAddress(string a, string b, string c, string d, string e);
    void showAddress();
    void showDetails();
    void showDetailsWithAddress();
    void deposit(int x);
    void withdraw(int x);
};
#endif