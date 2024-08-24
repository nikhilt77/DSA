class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=needle.length();
        int l2=haystack.length();
        for(int i=0;i<l2;i++){
            if(haystack.substr(i,l)==needle)
                return i;
        }
        return -1;
    }
};
int main(){
  Solution sol;
  string s,t;
  cout << "enter string:" << endl;
  cin >> s;
  cout << "enter second string" << endl;
  cin >> t;
  int index=sol.strStr(s,t);
  cout << "Index is:" << index <<endl;
}
