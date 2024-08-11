#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, int> arr[] = { make_pair(1, 2), make_pair(2, 3), make_pair(3, 4), make_pair(4, 5), make_pair(5, 6) };
    cout << arr[0].first << " " << arr[0].second << endl;
}