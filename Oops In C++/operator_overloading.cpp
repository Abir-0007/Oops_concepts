#include<iostream>
using namespace std;

class Complex{
    public:

    int real;
    int img;

    Complex(int x,int y){  //created a constructor for initialising
        real= x;
        img=y;
    }

    //to overload this operator..first we have to provide the return type then operator(which is to be overloaded) then in brackets we will pass our complex arguements(i.e; operand that is present on the rhs of the operator(c2)).
//main function of operator overloading.
    Complex operator+ (Complex &c){  //c is an object of class complex..
        Complex ans(0,0);
        ans.real= real+c.real; //real part of c1 and c2
        ans.img=img+c.img;  //img part of c1 and c2
        return ans;

    }


};

int main(){

    Complex c1(1,2);
    Complex c2(1,3);
    Complex c3=c1+c2;
    cout<<c3.real<<" i"<<c3.img<<endl;

    return 0;
}