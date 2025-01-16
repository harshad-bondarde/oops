#include<bits/stdc++.h>
using namespace std;



// Polymorphism --> is the ability of objecs to take diff forms in diff 
// ways depending on the way taht are used
  //   compile time AND Runtime polymorphism


// class Student{
//     public:
//         string name;
    
//     Student(){
//         cout<<"non-parameterized\n";
//     }   
//     Student(string name){
//         cout<<"parameterized\n";
//         this->name=name;
//     }
// };

// int main()
// {   
//     Student s1("harshad");//according to the way it is used constructor is called

    
//     return 0;
// }




//Function overloading --> example of compile time polymorphism when we define functions by same name in same class but they only differ in parameters

#include<bits/stdc++.h>
using namespace std;


class Print{
    public:
        void show(int x){
            cout<<x<<endl;
        }
};

int main()
{
    
    return 0;
}