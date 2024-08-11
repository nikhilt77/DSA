#include<iostream>
#include<cstdio>
#include<list>
using namespace std;
int main(){
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.emplace_back(3);
    list<int>::iterator it=li.begin();
    for(;it!=li.end();it++){
        cout<<*it<<endl;
    }

}
