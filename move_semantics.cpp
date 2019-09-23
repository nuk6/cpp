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
    int getI(){
        return *mPint;
    }
};

Int::Int(const Int& i1){
    cout << "\nCopy ctor invoked! \n";
    //this->mPint = i1.mPint; //Implementing SHALLOW copy.
    this->mPint = new int(*i1.mPint); // Implementing DEEP copy.
}

/*

Move constructor is invoked whenever we call a function with an Object as parameter 
or when a function passes an Object.
5-Rule(if u implement any of them, implement all)
-->destructor
-->copy constructor
-->copy assignment operator
-->move constructor
-->move assignment operator

*/

Int::Int(Int&& i1){
    cout << "\nMove ctor invoked!\n";
    this->mPint = new int(*i1.mPint + 5); //Added 5 just for illustration
}

Int Add(Int a, Int b, Int c){
    int ans = (a.getI())+(b.getI())+(c.getI());
    Int temp(ans);
    return temp;
}

int main(){
    /*Int i1(7);
    i1.showI();
    Int i2(i1);
    i2.showI();
    i2.setI(99);
    i1.showI();
    i2.showI();*/
    
    Int a(10);
    Int b(10);
    Int c(10);
    
    cout << Add(move(b),move(a),move(c)).getI();
    
    return 0;
}

/*


Move ctor invoked!

Move ctor invoked!

Move ctor invoked!
45

*/
