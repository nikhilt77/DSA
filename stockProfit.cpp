#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX; // Initialize minimum price to a very large value
    int max_profit = 0;      // Initialize maximum profit to 0

    for (int price : prices) {
        // Update the minimum price if the current price is lower
        if (price < min_price) {
            min_price = price;
        } 
        // Calculate the profit and update the maximum profit if needed
        else {
            max_profit = max(max_profit, price - min_price);
        }
    }

    return max_profit;
}

int main() {
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};

    cout << maxProfit(prices1) << endl; // Output: 5
    cout << maxProfit(prices2) << endl; // Output: 0

    return 0;
}
