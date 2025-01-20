// #include<bits/stdc++.h>
// using namespace std;

// //Inheritance -->properties nad member functions of base class are passed on to the derived class
// //code reusability

// //class A (Parent,Base)  -> class B (Child ,Derived)

// class Person{
//     public:
//         string name;
//         int age;

//         // Person(){ //no need to do anything with these kind of constructors

//         // }
//         Person(string name,int age){
//             this->name=name;
//             this->age=age;
//         }
// };

// class Student : public Person{ //this is single inheritance
//     public:
//         int rollno;
//         Student(string name,int age,int rollno):Person(name,age){
//             this->rollno=rollno;
//         }
//         void getInfo(){
//             cout<<"name: "<<name<<endl;
//             cout<<"age: "<<age<<endl;
//             cout<<"rollno: "<<rollno<<endl;
//         }
// };

// class GrandStudent{ //multiple level inheritance
//     public:
//         string researchArea;
// };

// int main()
// {   
//     // Student s1; //first parent class constructor is called then child class constructor is called
    
//     // s1.name="rahul";
//     // s1.age=19;
//     // s1.rollno=111;
//     // s1.getInfo();
//     return 0;
// }



// Multiple inheritance
// #include<bits/stdc++.h>
// using namespace std;

// class Student{
//     public:
//         string name;
//         int rollno;

// };

// class Teacher{
//     public:
//         string subject;
//         double Teacher;
// };

// class TA: public Student ,public Teacher{ 

// };

// int main()
// {   TA ta;
//     ta.name="ram";
//     ta.subject="engineering";
    
    
//    return 0;
// }




//Hierarchial inheritance
#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

class Student : public Person{
    public:
        int rollno;

};

class Teacher : public Person{
    public:
        string subject;
        double salary;
};

class TA:public Student,public Teacher{

};

int main()
{   
    
   return 0;
}



//hybird -->mix of all types 