#include<iostream>
using namespace std;
 
 //in a class we can have multiple constructor
 //Whenever we want to initialise our object by some values 
 //constructor has same name as class name...
 class Rectangle{
    public:
        int l;
        int b;
//constructor::
        Rectangle(){ //default constructor-no args passed...
            l=0;
            b=0;
        }

        Rectangle(int x,int y){ //parameterised constructor-->args passed
            l=x;
            b=y;
        }

        Rectangle(Rectangle& r){ //copy constructor-->initialising an object by another existing object.
        l= r.l; //which is object is passed its data is going to its new object properties
        b=r.b;
        }
//DESTRUCTOR::
        ~Rectangle(){ //destructor
            cout<<"Destructor is called\n";
        }

 };

 int main(){
    Rectangle *r1 = new Rectangle(); //object is created using pointer
    cout<<r1->l<<" "<<r1->b<<endl;
    delete r1; //this delete keyword can only be used in case of a pointer variable....
    
    //after implementation of the main function destructor is called

    Rectangle r2(5,6);
     cout<<r2.l<<" "<<r2.b<<endl;

     Rectangle r3=r2;
      cout<<r3.l<<" "<<r3.b<<endl;
    return 0;
 }