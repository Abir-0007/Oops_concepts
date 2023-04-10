#include<iostream>
using namespace std;

class A{
    int x;
public:
    A(int y){
        x=y;
    }
    friend void print(A &obj); //friend_keyword and function defination we have to provide.
};

void print(A &obj){  //it is a function where we are passing an object of class A. this print function is a friend of class A.Hence it can access x from class A.
    cout<<obj.x<<endl;
}

int main(){
    A obj(5);
    // cout<<obj.x; it will give an error as we cannot access it directly.
    print(obj); //

    return 0;
}