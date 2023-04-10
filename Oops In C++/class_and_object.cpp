#include<iostream>
using namespace std;
 
 //a class fruit is made which is a user defined datatype.
 class Fruit{

    //by default the properties of a particular class are private and we have to make them public to access the properties..
    public:

    //name and color are the properties of the class....datatype of the property(string) and name of the properties(name and color) is given.
    string name;
    string color;

 };

 int main(){
    // int num;
    Fruit apple; //object
    //now we are going to set the properties of my object
    apple.name = "APPLE"; //using dot we can access the properties of the object.
    apple.color = "RED";
//now print the values
    cout<<apple.name<<"-"<<apple.color<<endl;

//another way of defining an object.(by object pointer)
Fruit *mango = new Fruit();//if we use new operator to create an object then we will get a pointer variable that will point to that object..
mango->name="MANGO"; //here arrow operator is used to access the properties of the object...
mango->color="GREEN";
cout<<mango->name<<"-"<<mango->color<<endl;

    return 0;
 }