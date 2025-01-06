#include<iostream>
using namespace std;
char alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main(){
    string s;
    cout << "Enter Characters:";
    cin >> s;
    int hash[26]={0};
    cout << s <<endl;
    for(int i=0;i<26;i++){
        hash[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        cout << alpha[i] << '-'<<hash[i]<< endl;
    }
}
