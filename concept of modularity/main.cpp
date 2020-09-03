#include "stack.cpp"
#include "queue.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Stack s1;
    Queue s2;
    cout<<"On which data structure you want to perform\nPress 1 for Stack\tPress 2 for Queue\n";
    int j;
    cin>>j;
    if(j==1){
        cout<<"You choose stack.\nChoose any number:\n";
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
    }
    else{
        cout<<"You choose queue.\nChoose any number:\n";
        cout<<"1. To Enque\n2. To deque\n3. To get top element\n4. To display the Queue\n";
        cout<<"Press 0 to exit the program\n";
        int i;
        while(1>0){
            cout<<"Enter your choice\n";
            cin>>i;
            if(i == 1){
                int n;
                cout<<"Enter number:\n";
                cin>>n;
                s2.enqueue(n);
            }else if(i == 2){
                s2.dequeue();
            }else if(i == 3){
                s2.front();
            }else if(i == 4){
                s2.display();
            }else if (i == 0){
                break;
            }else{
                cout<<"Invalid Input\n";
            }
        }
    }
    return 0;
}
    /*s1.push(5);
    s1.push(2);
    s1.push(3);
    s1.display();
    s1.top();
    s1.pop();
    s1.display();
    return 0;*/
