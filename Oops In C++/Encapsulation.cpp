#include<iostream>
using namespace std;

class ABC{  //let class ABC has some data x..and that data we cannot access directly for that we have to write some functions..
    int x;

    public:
//function is written to pass some values...
    void set(int n){
        x=n;
    }

//function get will return the value of x to me....
    int get(){
        return x;
    }

};
int main(){
    ABC obj1; 
    //I cannot directly use obj1.x to get the data x as x is private to that particular class....so we are using get and set funcs to access that class...
    obj1.set(3);
    cout<<obj1.get()<<endl;

    return 0;
}