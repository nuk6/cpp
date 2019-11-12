#include "iheaders.h"

// CLASS TEMPLATES

template<typename T, int size>
class Stack{
    T arr[size];
    int top = -1;
public:
    //Stack() = default;
    bool isEmpty();
    void push(T t){
        arr[++top] = t;
    }
    T pop(){
        return arr[top--];
    }
    static Stack Create7();
};

template<typename T, int size>
bool Stack<T,size>::isEmpty(){
    return top == -1;
}
template<typename T, int size>
Stack<T,size> Stack<T,size>::Create7(){
    return new Stack<T,7>();
}

int main(){
    Stack<double,4> s1;
    for (size_t i = 0; i < 4; i++)
    {
        s1.push(i+1);
    }
    while (!s1.isEmpty())
    {
        cout << s1.pop() << endl;
    }
    return 0;
}
