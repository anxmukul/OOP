#include "stacks.h"
#include <bits/stdc++.h>
using namespace std;
int a[10];
int top = -1;
void Stack::push_an_integer(int x){
    if(top == 9){
        cout<<"Error: Stack Overflow:\n";
        cout<<"Exanding memory for storing data\n";
        a[10] = a[20];
        top = top +1;
        a[top] = x;
        return;
    }
    top = top+1;
    a[top] = x;
}
void Stack::pop_an_interger(){
    if(top == -1){
        cout<<"Stack is Empty.";
        return;
    }
    top = top-1;
}
int Stack::get_top_element(){
    return a[top];
}
int Stack::length_of_stack(){
    return top;
}
void Stack::Print_all_element(){
    int i=0;
    cout<<"Stack: ";
    for(i=0; i <= top; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}