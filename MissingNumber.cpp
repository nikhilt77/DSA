#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    vector<int> ans;
    
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    int i = 0, j = 0;

    while (j < brr.size()) {
        if (i < arr.size() && arr[i] == brr[j]) {
            i++;
            j++;
        } else {
            if (ans.empty() || ans.back() != brr[j]) {
                ans.push_back(brr[j]);
            }
            j++;
        }
    }

    return ans;
}

int main() {
    int n, m;

    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> m;
    vector<int> brr(m);
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }

    vector<int> result = missingNumbers(arr, brr);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
