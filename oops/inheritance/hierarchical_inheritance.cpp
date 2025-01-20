#include<bits/stdc++.h>
using namespace std;

class Human{
    
    private:
        string Religion,color;

    protected:
        string name;
        int age,weight;

    public:
        int marks;

};

class Student:public Human{
    private:
        int roll_number,fees;
    public:
        Student(string name,int age,int weight,int roll_number,int fees){
            this->name=name;
            this->age=age;
            this->weight=weight;
            this->roll_number=roll_number;
            this->fees=fees;
            
        }

        void display(){
            cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<endl;
        }
};

class Teacher:public Human{
        int salary;
    
    public:
        Teacher(int salary,string name,int age){
            this->salary=salary;
            this->name=name;
            this->age=age;
        }

        void display(){
            cout<<name<<" "<<age<<" "<<salary<<endl;
        }
};

int main()
{
    Student A1("Rohit",12,19,10,99);
    A1.display();
    Teacher A2(99,"Mohit",23);
    A2.display();
    return 0;
}