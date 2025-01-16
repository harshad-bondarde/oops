#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int account_number,balance;//these will created per object
    static int total_customer2;
    static int total_balance;

    public:
    static int total_customer; //this is attribute of class this will create only once when class is created 

    Customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }

    //to access static members
    static void accessStatic(){
        //this is part of class 
        //can access only static data types 
        cout<<total_customer2<<endl; //to access private static members 
        cout<<total_balance<<endl;   // we can use this anywhere like Customer::accessStatic()
    }

    void deposite(int amount){ //these funcitons can access static variables too
        if(amount>0){
            balance+=amount;
            total_balance+=amount;
        }
    }

    void wihtDraw(int amount){
        if(amount<=balance && amount>0){
            balance-=amount;
            total_balance-=amount;
        }
    }

    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
    }
};
//scope resolution operator
int Customer::total_customer=0; //set its value
int Customer::total_customer2=10;
int Customer::total_balance=0;

int main()
{
    Customer A1("Rohit",1,1000);
    Customer A2("Mohit",2,1800);
    A1.display();
    A2.display();
    Customer A3("tohit",4,6000);
    A3.display();
    
    Customer::total_customer=5; //can access it like this 
    A3.display();

    Customer::accessStatic();
    return 0;
}