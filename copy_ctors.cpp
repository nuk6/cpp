#include<iostream>
using namespace std;

class A{
    int a;
public:
    A(){};
    A(int a):a(a){}
    int getA(){
        return a;
    }
    int* getAddress(){
        return &a;
    }
    //Here 'const' is not dead necessary, but its a good practice.
    A(const A& a){
        cout << "\nCopy Ctor Invoked!! \n";
    }
};


int main(){
    A a1(7);
    cout << a1.getA();
    A a2(a1); // copy ctor invoked 
    cout << endl << a2.getA();
    cout << endl << a1.getAddress();
    cout << endl << a2.getAddress();
    return 0;
}

/*

7
Copy Ctor Invoked!! 

7
0x7fff1d22fe70
0x7fff1d22fe80

*/

