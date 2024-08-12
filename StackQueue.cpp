#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<int> s;
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
        q.push(x);
    }
    cout << s.top();
    cout << q.front();
    cout << s.size();
    cout << q.size();
    int flag=0;
    while(!s.empty() && !q.empty()){
        if(s.top()!=q.front()){
            flag=1;
            break;
        }
        s.pop();
        q.pop();
    }
    if(flag==1){
        cout<<"Not Palindrome";
    }
    else{
        cout<<"Palindrome";
    }
    return 0;
}
