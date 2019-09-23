#include<bits/stdc++.h>
using namespace std;

class Int{
    int* mPint;
public:
    Int() = default;
    Int(int i):mPint(new int(i)){}
    Int(const Int& i); // Copy constructor
    Int(Int&& i); // Move constructor
    void showI(){ cout << *mPint << endl ;}
    void setI(int i){
        *mPint = i;
    }
};

Int::Int(const Int& i1){
    cout << "\nCopy ctor invoked! \n";
    //this->mPint = i1.mPint; //Implementing SHALLOW copy.
    this->mPint = new int(*i1.mPint); // Implementing DEEP copy.
}

int main(){
    Int i1(7);
    i1.showI();
    Int i2(i1);
    i2.showI();
    i2.setI(99);
    i1.showI();
    i2.showI();
    
    return 0;
}
/*

7

Copy ctor invoked! 
7
7
99


*/
