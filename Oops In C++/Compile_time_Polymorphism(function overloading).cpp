//Function overloading in compile time polymorphism

#include<iostream>
using namespace std;

class sum{

    public:
    void add(int x,int y){
        int sum= x+y;
        cout<<sum<<endl;
    }

     void add(int x,int y,int z){
        int sum= x+y+z;
        cout<<sum<<endl;
    }

    void add(float x, float y){
        float sum= x+y;
        cout<<sum<<endl;
    }

};

int main(){
    sum S;
    S.add(3,4);
    S.add(3,4,4);
    S.add(float (2.3),float(4));
    return 0;
}