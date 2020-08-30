#include "stack.h"
#include <bits/stdc++.h>
using namespace std;
void Structure::push(int x){
    node *temp = new node();
    if(head == NULL){
        temp->data = x;
        head = temp;
        return;
    }
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Structure::pop(){
    if(head == NULL){
        cout<<"Empty stack\n";
        return;
    }
    node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
}
void Structure::top(){
    if(head == NULL){
        cout<<"Empty Stack\n";
        return;
    }
    cout<<"Top element is:-\n";
    cout<<head->data<<endl;
}
void Structure::display(){
    node *ptr = head;
    cout<<"Stack is: ";
    if(ptr == NULL){
        cout<<"Empty stack\n";
    }else if(ptr->next == NULL){
        cout<<ptr->data;
    }else{
        for(ptr = head; ptr != NULL; ptr = ptr->next){
            cout<<ptr->data<<" ";
        }
    }
    cout<<endl;
}