#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter Array size:";
    cin >> n;
    int arr[n],hash[13]={0};
    cout << "Enter numbers:" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    cout << "Output:";
    for(int i=0;i<n;i++){
        cout << hash[i] << endl;
    }

}
