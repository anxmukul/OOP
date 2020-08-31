#include "linkedlist.cpp"
#include <bits/stdc++.h>
using namespace std;
class Stack{
    private:
    int y;
    Linkedlist l1;
    public:
    void push(int n){
        y = n;
        l1.insert_at_front(y);
    }
    void pop(){
        l1.delete_from_front();
    }
    void top(){
        l1.get_front_element();
    }
    Stack(){}
};
