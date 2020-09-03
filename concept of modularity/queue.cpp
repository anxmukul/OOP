//#include "linkedlist.cpp" //if wo include this again then there will be redefinition error.
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
        cout<<l2.get_front_element()<<endl;
    }
    void display(){
        l2.display();
    }
};