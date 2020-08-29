// header file for address
#include <bits/stdc++.h>
using namespace std;
class Address{
    private:
    string flat_no;
    string street;
    string locality;
    string district;
    string state;
public:
    Address()
    {
    }
    Address(string a, string b, string c, string d, string e)
    {
        flat_no = a;
        street = b;
        locality = c;
        district = d;
        state = e;
    }
    string getAddress();
};