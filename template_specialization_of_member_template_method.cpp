#include "iheaders.h"

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

template<>
void pretty_print<vector<int>&>::print(){
    cout << "[";
    for(size_t i = 0; i < t.size(); i++)
    {
        cout << t[i];
    }
    cout << "]\n";
}

int main(){
    pretty_print<int>* p1 =  new pretty_print<int>(7);
    p1->print();
    const char* str = "Hello";
    pretty_print<const char*>* p2 = new pretty_print<const char*>(str);
    vector<int> v;
    for (size_t i = 0; i < 4; i++)
    {
        v.push_back(i+1%4);
    }
    pretty_print<vector<int>&>* p3 = new pretty_print<vector<int>&>(v);
    p2->print();
    p3->print();
}

/*
[ 7 ] 
 { Hello } 
[1234]
*/
