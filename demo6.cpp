#include <bits/stdc++.h>
using namespace std;
class number
{
private:
    int *p;

public:
    number()
    {
        cout << "Constructor called\n";
        p = new int[3]; //Accolating memory dynamically
        for (int k = 0; k < 3; k++)
        {
            p[k] = random();
        }
    }
    void display()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << p[i] << " ";
        }
        cout << "\n";
    }
};
int main()
{
    number *ptr = new number[5]; // Five obj(pointer type) is created so constructor called five times
    for (int j = 0; j < 5; j++)
    {
        ptr[j].display();
    }
    return 0;
}
// Dynamically creating number of objects and dynamic constructor called for each objects created.