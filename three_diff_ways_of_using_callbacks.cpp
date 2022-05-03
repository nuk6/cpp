#include <bits/stdc++.h>
using namespace std;

//using Comparator = bool(*)(int, int);

template<typename T, int sz, typename C>
void sort(T (&arr)[sz], void (*cb)(T(&arr)[sz]), C comp) {
	for (int i = 0; i < sz-1; ++i)
	{
		for (int j = i+1; j < sz; ++j)
		{
			if(comp(arr[i], arr[j])) {
				swap(arr[i], arr[j]);
			}
		}
	}
	cb(arr);
}

template<typename T, int sz>
void print(T (&arr)[sz]) {
	cout << "{ ";
	for (int i = 0; i < sz; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "}\n";
}

template<typename T>
bool less1(T a, T b) {
	return a < b;
}

struct Collable {
	bool operator()(int a, int b) {
		return a > b;
	}
}callableObj;

int main() {
	int arr[]{1, -2, 3, -4, 5, -6,7};
	bool (*lmbExp)(int, int) = [](int a, int b){ return a < b; };
	//sort(arr, print, lmbExp);
	//sort(arr, print, less1<int>);
	sort(arr, print, callableObj);
	return 0;
}
