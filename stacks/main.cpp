#include "stacks.cpp"
#include <bits/stdc++.h>
using namespace std;
int main(){
    Stack n1;
    for(int i = 0; i<6; i++){
        n1.push_an_integer(i*2);
    }
    cout<<"Top element\t"<<n1.get_top_element()<<"\n";
    cout<<"Length of stacks\t"<<n1.length_of_stack()<<"\n";
    for (int i = 0; i < 8; i++)
    {
        n1.push_an_integer(i*3);
    }
    cout<<"Now the length of stacks\t"<<n1.length_of_stack()<<"\n";
    cout<<"Top element\t"<<n1.get_top_element()<<"\n";
    n1.pop_an_interger();
    cout<<"Top element\t"<<n1.get_top_element()<<"\n";
    n1.Print_all_element();

}
