#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int maxHeight = *max_element(candles.begin(), candles.end());
    int count = count_if(candles.begin(), candles.end(), [maxHeight](int height) {
        return height == maxHeight;
    });
    return count;
}

int main() {
    int candles_count;
    cin >> candles_count;

    vector<int> candles(candles_count);
    for (int i = 0; i < candles_count; i++) {
        cin >> candles[i];
    }

    int result = birthdayCakeCandles(candles);
    cout << result << endl;

    return 0;
}
