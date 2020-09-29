#include <bits/stdc++.h>
using namespace std;
inline int MAX(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
} /*
int MAX(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}*/
int main()
{
    cout << "MAX(100, 300):\t" << MAX(100, 300) << endl;
    return 0;
}