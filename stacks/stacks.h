// header file for stacks;
class Stack
{
    private:
    int a[5];
    int top = -1;
    public:
    void push_an_integer(int x);
    void pop_an_integer();
    int get_top_element();
    int length_of_stack();
    void Print_all_element();
};