#include<iostream>

using namespace std;

int main(){
    int n;
    cout <<"Enter size of array"<< endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    int hash[8]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int q;
    cin >> q;
    while(true){
        int num;
        cout << "Enter number:";
        cin >> num;
        cout << hash[num] << endl;
    }
    return 0;
}
