#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
        string name;
        int age;
    public:
        Human(string name,int age){
            this->name=name;
            this->age=age;
        }
        void work(){
            cout<<"I am working \n";
        }

        void display(){
            cout<<"this is parent class";
        }
};

class Student:public Human{ //for constrctor->while creating obj of this class constructor of parent class will be created the child will be created 
    private:                //for destructor->while deleting first destrctor of child will be called then parent 
        int roll_number,fees;

    public:
        Student(string name,int age,int roll_number,int fees) : Human(name,age){
            // this->name=name;
            // this->age=age; we can do this or pass these params to Human constructor 
            this->roll_number=roll_number;
            this->fees=fees;
        }

        void display(){//this whenever obj.display is called this function will override the parent display funtion and this will get executed only
            cout<<"this is child class";
        }

};

int main()
{
    Student A1("Rohit",26,32,99);
    A1.work();
    return 0;
}