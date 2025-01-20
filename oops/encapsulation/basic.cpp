#include<bits/stdc++.h>
using namespace std;

// Encapsulation --> 

//wrapping up of data and information in a single unit of time 
// while controlling access to them 

class Customer{
    private:    
        string name;
        int account_number,balance; //this should be properly encapsulated in class 
                                    // cant make them public should access then using proper functions to validate the input data
    
    public:
    
    Customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;
    }

    void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }else{
            cout<<"invalid amount"<<endl;
        }
    }

    void withdraw(int amount){
        if(amount>=0 && amount<=balance){
            balance-=amount;
        }else{
            cout<<"invalid amount"<<endl;
        }
    }
    //give access to variables using functions and encapsulate them 
};

int main()
{
    
    return 0;
}