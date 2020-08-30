#include "stack.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Structure s1;
    cout<<"Choose any number:\n";
    cout<<"1. To push an element\n2. To pop top element\n3. To get top element\n4. To display the stack\n";
    cout<<"Press 0 to exit the program\n";
    int i;
    while(1>0){
        cout<<"Enter your choice\n";
        cin>>i;
        if(i == 1){
            int n;
            cout<<"Enter number:\n";
            cin>>n;
            s1.push(n);
        }else if(i == 2){
            s1.pop();
        }else if(i == 3){
            s1.top();
        }else if(i == 4){
            s1.display();
        }else if (i == 0){
            break;
        }else{
            cout<<"Invalid Input\n";
        }
    }
    return 0;
}