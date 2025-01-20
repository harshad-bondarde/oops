#include<bits/stdc++.h>
using namespace std;

//multiple parents one child 

class Engineer{

        
    public:
        string specialilzation;

        Engineer(){
            cout<<"Hello Engineer\n";
        }

        void work(){
            cout<<"i have specialisation in "+specialilzation<<endl;
        }
};

class Youtuber{
    public:
        int subscribers;

        Youtuber(){
            cout<<"Hello youtuber\n";
        }
        void contentcreator(){
            cout<<"I have a subscriber base of "+subscribers<<endl;
        }
};

class CodeTeachers:public Engineer , public Youtuber{
    public:
        string name;

        CodeTeachers(){
            cout<<"Hello coders\n";
        }
        CodeTeachers(string name , string specialilzation , int subscribers){
            this->name=name;
            this->specialilzation=specialilzation;
            this->subscribers=subscribers;
        }

        void showcase(){
            cout<<"My name is "<<name<<endl;
            work();
            contentcreator();
        }
};

int main()
{   CodeTeachers c; //first engineer then youtuber then codeteacher will be generated
    
    return 0;
}