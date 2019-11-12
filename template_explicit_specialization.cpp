#include "bits/stdc++.h"
using namespace std;

// TEMPLATE SPECIALIZATION
/*
Is done to differentiate for a particular type.
Must ne done in .cpp file.
*/
template<typename T>
T maxx(T x, T y){
    cout << "Common fn" << endl;
    return (x > y)?x:y;
}

//Explicit instantiation
template string maxx(string x, string y); 

//Explicit specialization
template<> const char* maxx(const char* x, const char* y){
    cout << "Specialized fn" << endl;
    return strcmp(x,y) > 0? x:y;
}

int main(){
    const char* a{"A"};
    const char* b{"B"};
    cout << maxx(a,b) << endl;
    cout << maxx(3,4) << endl;
    return 0;
}
/*
Specialized fn
B
Common fn
4
*/
