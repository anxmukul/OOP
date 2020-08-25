class Bank
{
    private:
    int id;
    int account_id;
    int balance;
    public:
    char type;
    private:
    void show_details();
    int return_balace(){
        return balance;
    }
    public:
    void add_a_customer();
    void update_balance();
    void change_type();
    Bank(){              //User defined constructor called because no argument passed
        id = 100111;
        account_id = 00000;
        type = 'S';
        balance = 0;

    }
    Bank(int x, int y, char z, int bal = 0){    //paramitrized constructor called
        id = x;
        account_id = y;
        type = z;
        balance = bal;
    }

};