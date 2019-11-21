#include "iheaders.h"
class A{
public:
    int a;
};
class B1: A{
public:
    int b1;
};
class B2: A{
public:
    int b2;
};
class C: B1,B2{
public:
    int c;
};

int main(){
    C obj;
    cout << sizeof(obj)/sizeof(int) << endl; // 5
    //obj.a = 9 error
    return 0;
}
/*

CORRECT : JUST NOTE TO MARK PROBLEMATIC CLASS(HERE A) AS VIRTUAL WHILE INHERITING


#include "iheaders.h"

class A{
public:
    int a;
};
class B1: virtual public A{
public:
    int b1;
};
class B2: virtual public A{
public:
    int b2;
};
class C: public B1, public B2{
public:
    int c;
};

int main(){
    C obj;
    cout << sizeof(obj)/sizeof(int) << endl; // 5
    cout << sizeof(C)/sizeof(int) << endl;
    obj.a = 9; //works
    return 0;
}

*/
