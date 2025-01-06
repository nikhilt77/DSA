#include<iostream>
using namespace std;

int main(){
    string s;
    cout << "Enter Characters:";
    cin >> s;
    int hash[256]={0};
    cout << s <<endl;
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }
    for(int i=0;i<256;i++){
        if(hash[i]>0){
            cout << char(i) << ":" << hash[i] << endl;
        }
    }
}
