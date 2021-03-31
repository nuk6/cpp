#include<vector>
#include<iostream>
#include<set>
using namespace std;

void Vector() {
    vector<int> v {4,5,6,7,8};
    for (size_t i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator iter = v.begin();
    while( iter != v.end() ) {
        cout << *iter++ << endl;
    }
    
}

void Set() {
    set<int, greater<int>> s {3,4,2,3,7};
    s.insert(8);
    set<int>::iterator elem_found = s.find(7);
    if(elem_found != s.end()) 
        printf("Element %d exists\n", *elem_found);
    multiset<int> m_set {1,6,3,3,3,3,3,6};
    pair<multiset<int>::iterator, multiset<int>::iterator> range = m_set.equal_range(3);
    multiset<int>::iterator range_start = range.first;
    while (range_start != range.second) {
        cout << *range_start++ << endl;
    }    
}

int main() {
    // Vector();
    Set();
    return 0;
}
