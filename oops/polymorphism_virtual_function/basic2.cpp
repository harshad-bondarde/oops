#include<bits/stdc++.h>
using namespace std;

class Area{
    public:
        int calculateArea(int r){
            return 3.14*r*r;
        }

        int calculateArea(int l,int b){ //function overloading 
            return l*b;
        }
};


// operator overloading int a; int b; cout<< a+b
//                      string str1,str2; cout<<str1+str2; now it adds strings this is called

// complext c2=c1+c2  // c1 is caling object c2 is passing as a argument

class Complex{
    int real,img;
    public:
        Complex(){

        }
         
        Complex(int real,int img){
            this->real=real;
            this->img=img;
        }
        void display(){
            cout<<real<<" i"<<img<<endl;
        }
        Complex operator +(Complex &C){
            Complex ans;
            ans.real=this->real+C.real;  // we are accessing the private another object --- > we can do this because this object is in the same class even in function we can access private members of the class having same type
            ans.img=this->img+C.img;
            return ans;
        }
};

int main()
{   
    Complex c1(1,2);
    Complex c2(2,3);
    Complex c3=c1+c2;
    c3.display();

    return 0;
}