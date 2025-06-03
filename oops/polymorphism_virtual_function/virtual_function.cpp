#include <bits/stdc++.h>
using namespace std;

class base {
public:
    virtual void print() { // if bptr->print is called it will decide on runtime which print function to call and this is called dynamic binding
        cout << "print base "
        "class\n";
    }

    void show() { // if bptr->show is called it will decide on compile time which show function to call and this is called static binding
        cout << "show base class\n";
    }
};

class derived : public base {
public:
    void print() {
        cout << "print derived class\n";
    }

    void show() {
        cout << "show derived class\n";
    }

    void hello(){
        cout<< "hello derived class\n";
    }
};

//--------------------------------------------------------------------------------------------------
class Animal{
    public:
        virtual void speak(){
            cout<<"Animal speaks huhu\n";
        }
};

class Dog:public Animal{
    public:
        void speak(){
            cout<<"Dog barks\n";
        }
};

class Cat:public Animal{
    public:
        void speak(){
            cout<<"Cat Meows\n";
        }
};

int main() {
    base* bptr; //pointer of parent class can store address of child class object
    derived d;
    bptr = &d;

    // Virtual function, 
    // binded at runtime
    bptr->print();

    // Non-virtual function, 
    // binded at compile time
    bptr->show();

    // bptr->hello(); // This will give an error because hello() is not a member of base class 

    // write code to know speaking of animals
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    for(auto a:animals)
        a->speak();

    return 0;
}