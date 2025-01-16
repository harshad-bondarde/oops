#include<bits/stdc++.h>
using namespace std;

//Destructor --> deallocate the memory that is statically allocated
              // for dynamically allocated mem we have to deallocate it dynamically
                
                //ptr points to mem allcation  
                //delete ptr deletes memory allocated at that pointer but ptr will be alive 

class Student{
    public:
        string name;
        double *cgpaPtr; //first pointing to any other address
        
        Student(string name,double cgpa){
            this->name=name;
            cgpaPtr=new double; //created memory to point since cgpaPtr was pointer had to allocated it some data in that address
            (*cgpaPtr)=cgpa;
        }
        
        ~Student(){
            cout<<"i am deleted"<<endl;
            delete cgpaPtr; //deleted correctly
        }

        void getInfo(){
            cout<<name<<endl;
            cout<<(*cgpaPtr)<<endl;
        }
};

int main()
{   
    {    
        Student s1("john",9.0);;
        s1.getInfo();
    } //now here obj will go out of scope
    cout<<"this is afeter deleted";
    return 0; //here object goes outof scope so item will be deleted if not in brackets
}