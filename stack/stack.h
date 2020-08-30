// implementation of stack using linked list;
#include <bits/stdc++.h>
using namespace std;
class Structure{
    private:
    struct  node{
        int data;
        node *next;
    };
    node *head = NULL;
    public:
    void push(int x);
    void pop();
    void top();
    void display();
};