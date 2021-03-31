#include<vector>
#include<iostream>
#include<set>
#include<map>
#include<string>
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

void Map() {
    map<int, string> m { {0, "Zero"} };
    map<int, string>::iterator it = m.begin();
    while(it != m.end()) {
        cout << "Key = " << it->first << " & Value = " << it->second;
        it++;
    }
    cout << endl;

    // Two way to insert elements
    m.insert(pair<int, string>(1,"One"));
    m.insert(make_pair(2,"Two"));

    // Two ways to find the elements
    auto itr = m.find(1);
    cout << "Found..." << itr->second << endl;
    cout << "Found..." << m[1] << endl;

    multimap<int, string, greater<int>> m_map {
        {1, "One"},
        {2, "Two"},
        {2, "Two-Duplicate"}
    };
    // A bit creazyyy i know :P
    pair<multimap<int, string, greater<int>>::iterator, multimap<int, string, greater<int>>::iterator> range = m_map.equal_range(2);
    auto itrr = range.first;
    cout << "Printing Equal Range result...\n";
    while(itrr != range.second) {
        cout << itrr->second << endl;
        itrr++;
    }
    cout << "Done...";
}

int main() {
    // Vector();
    //Set();
    Map();
    return 0;
}
