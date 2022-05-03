#include<bits/stdc++.h>

using namespace std;

template<typename T>
class PrettyPrint{
	public:
		PrettyPrint(){
			cout << "Constructing!\n";
		}
		T data;
		//string usingStr;
		void print();
};


template<typename T>
void PrettyPrint<T>::print() {
	cout << "Other PrettyPrints \n";
}

// Explicit specialization of a method for certain type
template<> 
void PrettyPrint<char>::print() {
	cout << "PrettyPrint for `char`\n";
}

int main(int argc, char const *argv[])
{
	PrettyPrint<char> p1;
	p1.print();
	return 0;
}
