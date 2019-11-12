#include "iheaders.h"

// TEMPLATE INSTANTIATION

template<typename T>
T maxx(T x, T y){
    cout << typeid(T).name() << endl;
    return (x > y)?x:y;
}

//maxx fn for type 'string' will be instantiated
template string maxx(string x, string y); 

int main(){
    cout << maxx(2,3) << endl;
    cout << maxx(2.3,3.4) << endl;
    char (*pfn)(char,char) = maxx;
    cout << pfn('a','b') << endl;
    cout << maxx<double>(3,4) << endl;
    return 0;
}
