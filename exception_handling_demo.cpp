#include <bits/stdc++.h>
using namespace std;
int main(){
    // int x = 7;
    // int y = 8;
    int x, y;
    cout<<"Enter any two numbers\n";
    cin>>x>>y;
    try{
        cout<<"Inside Try block\n";
        if(x/y < 1){
            throw x/y;
        }
        if(x/y == 1){
            throw 'S';
        }
        // if(x/y > 1){
        //     throw 1.11;
        // }
    }
    catch(int z){
        cout<<"Inside 1st Catch\n";
        cout<<"Remainder is \t"<<z<<endl;
    }
    catch(char s){
        cout<<"Inside 2nd Catch\n";
        cout<<"same numbers\n";
    }
    // catch(...){
    //     cout<<"Inside 3rd catch statement\n";
    //     cout<<"You Choose two perfect numbers\n";
    // }
    cout<<"Outside Try catch Block\n";
    return 0;
}