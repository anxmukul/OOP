#include "stacks.h"
#include <bits/stdc++.h>
using namespace std;
int a[10];
int top = -1;
void push_an_integer(int x){
    if(top == 9){
        cout<<"Error: Stack Overflow";
        cout<<"exanding memory for storing data\n";
        a[10] = a[20];
        top = top +1;
        a[top] = x;
        return;
    }
    top = top+1;
    a[top] = x;
}
void pop_an_interger(){
    if(top == -1){
        cout<<"Stack is Empty.";
        return;
    }
    top = top-1;
}
int get_top_element(){
    return a[top];
}
int length_of_stack(){
    return top;
}