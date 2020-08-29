//#include "customer.c"
//#include "address.h"
#include "bank.h"
#include <bits/stdc++.h>
using namespace std;
void Bank::describeAllCustomers(){
        for (int i = 0; i < size; i++){
            customer_ary[i].showDetails();
        }
}
void Bank::describeAllCustomersInDetail(){
    for (int i = 0; i < size; i++){
        customer_ary[i].showDetailsWithAddress();
    }
}
void Bank::setAddressForCustomer(){
    int n;
    cout << "Enter customer id\n";
    cin >> n;
    cout << "Which Address? Press 1 for permanent, press 2 for present\n";
    int y;
    cin >> y;
    if (y == 1) {
        string a, b, c, d, e;
        cout << "Enter flat_no, street, locality, distict, state\n";
        cin >> a >> b >> c >> d >> e;
        customer_ary[n - 1].setPermanentAddress(a, b, c, d, e);
    }
    else if (y == 2){
        string a, b, c, d, e;
        cout << "Enter flat_no, street, locality, distict, state\n";
        cin >> a >> b >> c >> d >> e;
        customer_ary[n - 1].setPresentAddress(a, b, c, d, e);
    }
    else{
        cout << "Bad input\n";
    }
}
void Bank::depositCash(int customer_id, int amount){
    customer_ary[customer_id - 1].deposit(amount);
}
void Bank::withdrawcash(int customer_id, int amount){
    customer_ary[customer_id - 1].withdraw(amount);
}