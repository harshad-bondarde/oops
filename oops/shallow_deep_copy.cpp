#include<bits/stdc++.h>
using namespace std;


//new int [5] this is not stored on stack it is stored in heap dynamically on runtime

//shallow copy -->obj copies all the member values from one obj to another 
//deep         -->not only copies but makes copies of dynamically allocated memory that member function point to 

class Student{
    public:
        string name;
        double *cgpaPtr; //first pointing to any other address
        
        Student(string name,double cgpa){
            this->name=name;
            cgpaPtr=new double; //created memory to point since cgpaPtr was pointer had to allocated it some data in that address
            (*cgpaPtr)=cgpa;
        }

        //shallow copy 
        // Student(Student &s){
        //     this->name=s.name;
        //     this->cgpaPtr=s.cgpaPtr; //this is where problem is created in shallow copy same data at memory address gets updated which is used by other objects to point is data
        //                              //solution -> create another memory for another object and allocate data accordingly
        // }
        
        //deep copy 
        Student(Student &s){
            this->name=s.name;
            cgpaPtr=new double;
            (*cgpaPtr)=*s.cgpaPtr;
        }


        void getInfo(){
            cout<<name<<endl;
            cout<<(*cgpaPtr)<<endl;
        }
};

int main()
{
    Student s1("rahul kumar",8.9);
    Student s2(s1); //say neha now if neha s cgpa is increased which is same memory location of rahuls cgpa pointer then rahuls cgpa will also increase which dont have to be

    s1.getInfo();
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();
    return 0;
}