#include<iostream>
using namespace std;

class Parent{
    public:
     virtual void print(){   //here we used virtual keyword for function overriding i.e; it will be decided in the runtime that which function is getting called..
            cout<<"parent class"<<endl;
        }
        void show(){
            cout<<"parent class"<<endl;
        }
};

class Child: public Parent{
      public:
        void print(){
            cout<<"child class"<<endl;
        }
        void show(){
            cout<<"child class"<<endl;
        }
};

int main(){
    Parent *p; //let made this a pointer variable
    Child c;

    p= &c; //at runtime we override our object variable...the pointer variable p assigned by object of the child class
    p->print();  //it prints child class because at runtime we assigned the pointer variable, p by object of the child class in line no 28 also virtual keyword is used ...
    p->show();  //there is no virtual keyword defined in show() function, hence no function overriding is seen and it givies parent class...
    return 0;
}