#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T>
class pretty_print{
    T t;
    public:
    pretty_print() = default;
    pretty_print(T t):t(t){}
    void print(){
        cout << " [ " << t << " ] " << endl;
    }
};


template<>
class pretty_print<const char*>{
    const char* t;
    public:
    pretty_print() = default;
    pretty_print(const char* t):t(t){}
    void print(){
        cout << " { " << t << " } " << endl;
    }
};

int main(){
    pretty_print<int>* p1 =  new pretty_print<int>(7);
    p1->print();
    const char* str{"Hello"};
    pretty_print<const char*>* p2 = new pretty_print<const char*>(str);
    p2->print();
}
