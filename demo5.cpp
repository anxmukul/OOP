#include <bits/stdc++.h>
using namespace std;
class house
{
private:
    char *p; //Charecter pointer
public:
    house()
    {
        cout << "Dynamic cinstructor called\n";
        p = new char[20]; // creating memory inside constructor dynamically at runtime.
        p = "Navita Bhuvi";
    }
    void display()
    {
        cout << "House Name:\t" << p << endl;
    }
};
int main()
{
    house *h1 = new house();
    h1->display();
}


// Here we make the class object, pointer ponting to the memory allocated
/*
#include <iostream> 
using namespace std; 
  
class geeks { 
    const char* p; 
  
public: 
    // default constructor 
    geeks() 
    { 
  
        // allocating memory at run time 
        p = new char[6]; 
        p = "geeks"; 
    } 
  
    void display() 
    { 
        cout << p << endl; 
    } 
}; 
  
int main() 
{ 
    geeks obj = new geeks(); 
    obj.display(); 
}
*/
