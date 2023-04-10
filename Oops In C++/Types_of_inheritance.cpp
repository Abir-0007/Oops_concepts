#include<iostream>
using namespace std;

class Parent1{
    public:
    Parent1(){ //constructor
cout<<"Parent1 class"<<endl;
    }
};

class Parent2{
    public:
    Parent2(){ //constructor
cout<<"Parent2 class"<<endl;
    }
};

class Child: public Parent1, public Parent2{  //here we can inherit multiple classes properties
    //here the child class will inherit the properties of the parent class.
public:
    Child(){
        cout<<"child class"<<endl;
    }
};  
class Grandchild: public Child{
public:
    Grandchild(){
        cout<<"Grand child class"<<endl;
    }
};

int main(){

   Child c; //object of class child
  //Grandchild gc;

    return 0;
}