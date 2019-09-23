#include<iostream>
using namespace std;


class A {
    int* a;
public:
    A(){
        cout << "A\n";
    }
    int getA() const{
        cout << "Called Too \n";
        return *a;
    }
};

class B:A{
    int* b;
public:
    B():A(){
        cout << "B\n";
    }
    int getB() const{
        cout << "Called\n";
        this->getA();
        return *b;
    }
};

class C:B{
    int* c;
public: 
    C(int c):B(){
        this->c = new int(c);
        cout << "C\n";
    }
    int getC() const{
        this->getB();
        return *c;
        
    }
};

int main(){
    
    C c(5);
    cout << endl << c.getC();
    
    return 0;
}

/*

A
B
C
Called
Called Too 

5

*/


