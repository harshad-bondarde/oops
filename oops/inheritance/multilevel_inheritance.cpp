#include<bits/stdc++.h>
using namespace std;

class Person{
    protected:
        string name;

    public:
        void introduce(){
            cout<<"Hello my name is: "<<name<<endl;
        }
};

class Employee:public Person{
    protected:
        int salary;
    public:
        void monthly_salary(){
            cout<<"My monthly salary is:"<<salary<<endl;
        }
};

class Manager:public Employee{
    public:
        string department;

        Manager(string name,int salary,string department){
            this->name=name;
            this->salary=salary;
            this->department=department;
        }

        void work(){
            cout<<"i am leading the department "<<department<<endl;
        }
};

int main()
{   Manager m("Rohit",10000,"cse");
    m.work();
    m.introduce();
    
    return 0;
}