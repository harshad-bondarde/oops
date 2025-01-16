#include<bits/stdc++.h>
using namespace std;
//private data and methods accessible inside class
//public  data and methods accxessible to everyone 
//protected -------------- accessible inside class and to its derived class

class Teacher{
        double salary;

    public:

        //non-parameterised
        Teacher(){  // always public
            salary=300; //default salary
            cout<<"new object created..."<<endl;
        }

        //parameterised 
        // Teacher(string name,string dept,string subject,double salary){
        //     this->name=name;
        //     this->dept=dept;
        //     this->subject=subject;
        //     this->salary=salary;
        // }

        inline Teacher(string name1,string dept1,string subject1,double salary1):name(name1),dept(dept1),subject(subject1),salary(salary1){

        }

        Teacher(Teacher &obj){ //reference is passed to make a copy constructor in c++ changes will be reflected in this obj
            cout<<"i am custom copy contructor"<<endl;
            this->name=obj.name;
            this->dept=obj.dept;
            this->subject=obj.subject;
            this->salary=obj.salary;
        }
        string name;
        string dept;
        string subject;
        
        void changeDept(string newdept){
            dept=newdept;
        }

        void setSalary(double s){
            salary=s;
        }

        int getSalary(){
            return salary;
        }

        void getInfo(){
            cout<<name<<endl;
            cout<<dept<<endl;
            cout<<subject<<endl;
            cout<<salary<<endl;
        }

};

int main()
{   Teacher t1;
    Teacher t2("John","cse","math",10000); //parameterised 
    // t2.getInfo();
    Teacher t3(t2); //default copy constructor if no custom copy constructor is writte in 
                    // c++ --?new memory is created for this t3 
    t3.getInfo();
    return 0;
}

//Contructor -->
//same name as class
//doesnt have a return type
//only called once (automatically) at object creation
//mem alloc happens when constructor is called //for objects not for classes


