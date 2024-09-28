#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cout <<"Enter size of array"<< endl;
    cin >> n;
    int arr[n];
    map<int,int> mpp;
    cout << "Enter array elements" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int q;
    cout << "Enter the limit:" << endl;
    cin >> q;
    while(q>=0){
        int num;
        cout << "Enter number:";
        cin >> num;
        cout <<num<<":"<< mpp[q] << endl;
        q--;
    }
    return 0;
}
