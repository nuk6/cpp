#include<bits/stdc++.h>

using namespace std;


void Print() {
	cout << "!\n";
}

template<typename A, typename... Rest>
void Print(A a, Rest... rest) {
	cout << a << " ";
	Print(rest...);
}

int main() {
	Print(1, "2", "Three", 4.0f, 5.678);
	Print(9, "12", "Three", 4.0f, 5.678);
}
