#include "linkedlist.cpp"
#include <bits/stdc++.h>
using namespace std;
class Queue{
    private:
    Linkedlist l2;
    public:
    void enqueue(int x){
        l2.insert_at_end(x);
    }
    void dequeue(){
        l2.delete_from_front();
    }
    void front(){
        l2.get_last_element();
    }
};