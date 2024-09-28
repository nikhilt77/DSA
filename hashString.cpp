#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << "Enter String:";
    cin >> s;
    int Hash[26]={0};
    for(int i=0;i<s.size();i++){
        Hash[s[i]-'a']+=1;
    }
    while(true){
        char c;
        cout << "Enter character:";
        cin >> c;
        cout << Hash[c-'a']<<endl;
    }
}
