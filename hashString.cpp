#include <cctype>
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    string s;
    cout << "Enter String:";
    cin >> s;
    for(char &c:s){
        c=tolower(c);
    }
    map<char,int> mpp;
    for(int i=0;i<s.length();i++){
        mpp[s[i]]++;
    }
    while(true){
        char c;
        cout << "Enter character:";
        cin >> c;
        cout <<c<<":"<<mpp[c]<<endl;
    }
}
