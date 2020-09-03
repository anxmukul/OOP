#include "linkedlist.cpp"
#include <bits/stdc++.h>
using namespace std;
class Stack{
    private:
    Linkedlist l1;
    public:
    void push(int n){
        l1.insert_at_front(n);
    }
    void pop(){
        l1.delete_from_front();
    }
    int top(){
        return l1.get_front_element();
    }
    void display(){
        l1.display();
    }
    bool empty(){
        l1.empty();
    }
    Stack(){}
};