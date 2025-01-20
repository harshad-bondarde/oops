#include<bits/stdc++.h>
using namespace std;

// class Human{
//     private: //access within the class
//         int a;
//     protected://access within the derived classes
//         int b;
//     public://everywhere
//         int c;
// };

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
    int salary,id;
};

class Studentmarks:protected Student{


};

int main()
{
    // Student A;
    // A.name is not valid 

    // Studentmarks Sm;
    // Sm.marks; 
    // cannot access this bcz Studentmarks is inherited by protected


    Student A("ROHIT",12,47,21,13000);
    A.display();
    return 0;
}