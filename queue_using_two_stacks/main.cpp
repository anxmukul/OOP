#include "stack.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Stack s1, s2;
    cout<<"1. To enqueue\n2. To dequeue\n3. To display the queue\n";
    cout<<"Press 0 to exit the program\n";
    int i,n;
    while(1>0){
        cout<<"Choose your number:\n";
        cin>>i;
        if(i == 1){
            cout<<"Enter the number:\n";
            cin>>n;
            while (!s1.empty()) { 
                s2.push(s1.top()); 
                s1.pop(); 
            } 
            s1.push(n); 
            while (!s2.empty()) { 
                s1.push(s2.top()); 
                s2.pop(); 
            }
        }
        else if(i == 2){
            s1.display();
            if (s1.empty()) { 
                cout << "Q is Empty"; 
                exit(0);
            }
            int x = s1.top(); 
            s1.pop(); 
            return x;  
        }
        else if(i == 3){
            s1.display();
        }
        else if(i == 0){
            break;
        }
    } 
    return 0;
}