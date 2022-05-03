#include<bits/stdc++.h>

using namespace std;

using Comparator = bool(*)(int, int);

template<int size>
using Callback = void (*) (int*);

template<typename T, int size>
void sort(T (&arr)[size], Comparator comp, void(*cb)(T (&arr)[size])) {
	int n = size;
	for(int i = 0; i < n-1; ++i) {
		for(int j = i+1; j < n; ++j) {
			if(comp(arr[i], arr[j])) {
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}  
	cb(arr);
}


bool fn(int a, int b) {
	return (a < b) ? true : false;
}

template<typename T, int size>
void cb(T (&arr)[size]) {
	cout << "{ ";
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "}\n";
}

int main() {
	int arr[]{1, -2, 3, -4, 5, -6, -7, -8, 9};
	cb(arr);
	sort(arr, fn, cb);
	return 0;
}
