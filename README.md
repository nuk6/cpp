# cpp

Modern C++ Course

=> [Virtual inheritance 1](https://www.youtube.com/watch?v=jYP_MfI4b5A)

=> [Virtual inheritance 2](https://www.youtube.com/watch?v=GsK_4doAmpc)

=> [Virtual inheritance use case](https://www.youtube.com/watch?v=WObyOa2FXwI)

=> [VTable & VPtr](https://www.youtube.com/watch?v=Z_FiER8aAqM)

=> [Deque implementation](https://stackoverflow.com/questions/6292332/what-really-is-a-deque-in-stl)

=> [Memory](https://www.youtube.com/watch?v=_8-ht2AKyH4)

=> Avoid copy initialization for user defined types & use uniform initialization instead.

=> For Primitive types, you could use direct initialization

1) Uniform initialization
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
	char c1[8] = { "Nidhi" };
	char* p1 = new char[8];
	char* p2 = new char[8]{ "Hello" };
	cout << c1 << endl << *p1 << endl << *(p2)[1] << endl;
	/*
		Copy Initialization T var_name = value; - should avoid for complex types
		Direct Initialization T var_name{ value };
		Value Initialization T var_name{}
    -----WELL i DIDN'T CLEARLY GRASPED THESE. I'LL LOOK INTO THEM AGAIN & WILL UPDATE THIS SECTION
	*/
	return 0;
}
```

2) Pointers
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
	char a = 'a';
	char *p = &a;
	void *p1 = &a; // void pinters can point to other types
	*p = 'b';
	cout << "a = " << a << endl; // prints b
	// a pointer can also point to null ('nullptr' 2b exact ) but read / write can't be performed
	int *ptr = nullptr;
	// Wt the heck it used for then ??
	return 0;
}
```
3) References
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
	// References - Just an alias for a variable
	// int &ref = 4; - Can never be an l-value ( unless it's const as we're sure it wont change. see below
	const int &constRef = 10;
	cout << "constRef = " << constRef << endl;
	int x = 10;
	int &ref = x;
	x = 9;
	int anotherVar = 10;
	// &ref = anotherVar; - can't oint to another var
	cout << "Ref = " << ref << endl;
	return 0;
  /*
  Discussion - pass by 'ref' va pass by 'pointer' , ( references always have valid values , but pointer can even be 'nullptr'
  which could cause runtime errs so we'll need to add validation for nullptr but not for references
  */
}
```
- Constant Pointers
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
	const int CHUNK_SIZE = 512;
	// int *p1 = &CHUNK_SIZE; - RTE as the variable is constant, the ptr shd also b constant
	const int *p1 = &CHUNK_SIZE;
	cout << *p1 << endl;
	// *p1 = 4; - RTE as p1 is constant
	int y = 18;
	p1 = &y;
	cout << *p1 << endl; // Doable as pointer aint constant :p
	// *p1 = 19; - ALso not doable although y aint constant , the decalration of p1 saysval can't be modifield
	const int * const ptr = &CHUNK_SIZE; 
	// To initialize pointer also as a constant the above way is used.
	// It's application is in accepting arguments through a function where we don't want to accidently modify
	// the value or the pointer
	return 0;
}
```
- Constant References
```c++
#include <bits/stdc++.h>
using namespace std;

void myPrint(const int& val) {
	cout << "Value = " << val << endl;
	// val = 11; - RTE , Not doable so we don't explicitely change
}

int main() {
	int x = 10;
	myPrint(x);
	return 0;
}
```

3) Initialization
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a{1} /*Uniform Initialization*/, b(2)/*Direct Initialization*/, 
    c{} /* Gets Initiallized to it's default val*/, d = 4; /*Copy Initialization*/ 
    //cout << "a = " << a <<" "<< b <<  " " << c << " " << d << endl; // 1 2 0 4
    // int e(); // Most vexing parse

    // Kaam ki baat

    int stack_mem_arr[5]{3}; // 3 0 0 0 0
    //cout << "Sz = " << sizeof(stack_mem_arr) << endl;
    for(int i = 0; i < sizeof(stack_mem_arr)/sizeof(int); ++i) cout << stack_mem_arr[i] << " "; cout << endl;

    int *heap_mem_arr = new int[5]{3}; // 3 0 0 0 0 
    //cout << "Sz = " << sizeof(heap_mem_arr) << endl;
    for(int i = 0; i < 5; ++i) cout << heap_mem_arr[i] << " "; 
    cout << endl;

    return 0;
}
```
4) Pointers
```c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    void* ptr = &a;
    int* ptr1 = &a;
    int *ptr2 = &b;
    cout << ptr << " --- " << ptr1 << endl; // 0x61ff04 --- 0x61ff04
    ptr = ptr2;
    cout << "Void ptr val = " << *(int*)ptr << endl;

    int* null_ptr = nullptr; 
    // cout << *null_ptr << endl; Read not allowed
    // *null_ptr = 10; Write not allowed;
    null_ptr = ptr1;
    cout << "Now read allowed : " << *null_ptr << endl;

    *null_ptr = 40;

    cout << "Even Write works : " << *null_ptr << endl;

    void* NULL_ptr  = NULL;

    // cout << "Literally NULL Ptr" << *NULL_ptr << endl; Read not allowed
    // *NULL_ptr = 30; Write not allowed even with this

    return 0;
}
```

4) auto and static
```c++
```
