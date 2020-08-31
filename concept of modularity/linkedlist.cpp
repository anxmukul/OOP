#include <bits/stdc++.h>
using namespace std;
class Linkedlist{
    private:
    node *head;
    public:
    void insert_at_end(int x){
        node *cur = new node();
        node *ptr = head;
        cur->data = x;
        if(head == NULL){
            head = cur;
            cur -> next = NULL;
        }
        else{
            for(ptr = head; ptr->next != NULL; ptr= ptr->next);
            cur->data = x;
            ptr->next = cur;
            cur->next = NULL;
            ptr = cur;   
        }
    }
    void insert_at_front(int x){
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
    void delete_from_end(){
        node *ptr, *prv;
        for(ptr=head; ptr->next != NULL; ptr = ptr->next){
            prv = ptr;
        }
        prv->next = NULL;
        free(ptr);
    }
    void delete_from_front(){
        if(head == NULL){
        cout<<"Empty stack\n";
        return;
        }
        node *ptr;
        ptr = head;
        head = head->next;
        free(ptr);
    }
    int get_front_element(){
        node *ptr = head;
        return ptr->data;
    }
    int get_last_element(){
        node *ptr;
        for(ptr=head; ptr->next != NULL; ptr = ptr->next);
        return ptr->data;
    }
    Linkedlist(){
        head = NULL;
    }
    struct node{
    int data;
    node *next;
    };
};

