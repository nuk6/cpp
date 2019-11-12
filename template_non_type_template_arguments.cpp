#include "iheaders.h"

// NON TYPE TEMPLATE ARGUMENTS
/*
Must be constant expressions and can't be modified
*/

template<int size>
void print(){
    cout << "size = "<< size << endl;
    //size++ or size = 10 will give error.
    // int arr[size] , will work!
}

template<typename T, int size>
T sum(T (&refArr)[size]){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += refArr[i];
    }
    return sum;
}

int main(){
    print<4>();
    // int v = 3 , wont work.
    const int v = 3;
    print<v>();
    int arr[] = {1,2,3};
    int (&ref)[3] = arr;
    cout << sum(ref) << endl;
    cout << sum(arr) << endl;
    return 0;
}
