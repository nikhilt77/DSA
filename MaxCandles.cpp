#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int max = 0;
    int count = 0;
    int n = candles.size();

    for (int i = 0; i < n; i++) {
        if (candles[i] >= max) {
            max = candles[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (max == candles[i]) {
            count++;
        }
    }

    return count;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    string candles_count_temp;
    getline(cin, candles_count_temp);
    int candles_count = stoi(candles_count_temp);

    string candles_temp_temp;
    getline(cin, candles_temp_temp);
    vector<string> candles_temp;
    size_t start = 0;
    size_t end = 0;

    while ((end = candles_temp_temp.find(" ", start)) != string::npos) {
        candles_temp.push_back(candles_temp_temp.substr(start, end - start));
        start = end + 1;
    }
    candles_temp.push_back(candles_temp_temp.substr(start));

    vector<int> candles(candles_count);
    for (int i = 0; i < candles_count; i++) {
        candles[i] = stoi(candles_temp[i]);
    }

    int result = birthdayCakeCandles(candles);

    fout << result << "\n";
    fout.close();

    return 0;
}
