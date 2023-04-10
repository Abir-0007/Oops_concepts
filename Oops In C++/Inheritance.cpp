//access soecifiers and inheritance modes
#include <iostream>
using namespace std;

class Parent{
    public:
        int x;

    protected:
        int y;

    private:
        int z;

};

//properties of parent class is inherited in some other class publically
class Child1: public Parent{ //inheritance mode
//x will remain public
//y will be protected
//z will not be accessible
};

class Child2: private Parent{
    //x will be private
    //y will be private
    //z will not be accessible
}; 

class Child3: protected Parent{
    //x will be protected
    //y will be protected
    //z will not be accessible
};

int main(){

    Parent p;
    p.x;  //x can be accessed here coz its public
    return 0;
}