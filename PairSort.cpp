#include<iostream>
#include<fstream>
#include<cstdlib>
#include<map>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second)return true;
    if(p1.second>p2.second)return false;
    if(p1.first>p2.first) return true;
    return false;
}
int main(){
    pair<int,int> pairs[5];
    vector<pair<int,int> > p(5);
    for(int i=0;i<5;i++){
        cin >> p[i].first >>p[i].second;
    }
    sort(p.begin(),p.end(),compare);
    for(int i=0;i<5;i++){
        cout << p[i].first << " " << p[i].second << endl;
    }
}
