#include<bits/stdc++.h>
using namespace std;
//size of empty class is 1 byte - as to call it atleast some structure it should have some size to make it distinguishable
                             // -  empty class- that does not contain any data member but could contain member funtions 
                             // -  class without obj requires no space to it -- space is allocated when object is initialised -- so 1 byte is allocated to obj for its unique address
class a{
    char b;//size 1byte  //compiler adds padding 
    int a; //size 4bytes
}; //overall size will be 8 bytes 

class a1{
    double a;  // ans 16
    char c;
};
int main()
{   a1 obj;
    cout<<sizeof(obj);
    
    return 0;
}