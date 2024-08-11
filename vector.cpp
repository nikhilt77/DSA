#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main() {
    vector<int> v;
    v.emplace_back(2);
    v.push_back(3);

    // Input values to fill the vector v
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }

    vector<pair<int, int>> v1;
    v1.push_back(make_pair(1, 2));

    vector<int> v2(5, 20);
    for (auto it = v2.begin(); it != v2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for (auto it : v) {
        cout << it << " ";
    }
    cout << endl;

    // Ensure v has at least 3 elements before erasing
    if (v.size() > 1) {
        v.erase(v.begin() + 1);
    }
    v2.erase(v2.begin()+1,v2.begin()+3);
    // Insert three 50s starting at position 1
    v.insert(v.begin() + 1, 3, 50);

    for (auto it : v) {
        cout << it << " ";
    }
    vector<int>::iterator it2=v2.begin();
    while(it2!=v2.end()){
        cout<<*it2<<" ";
        it2++;
    }
    cout << endl;

    return 0;
}
