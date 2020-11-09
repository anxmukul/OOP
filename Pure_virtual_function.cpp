#include<bits/stdc++.h>
using namespace std;
class Test
{
int x;
public:
virtual void show() = 0;
int getX() { return x; }
};
int main(void)
{
Test t;     // canot create a object of pure virtual class/abstract class.
return 0;
}
