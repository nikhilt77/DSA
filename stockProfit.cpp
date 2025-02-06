#include<iostream>
#include<vector>
#include<climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int day=0;
        int profit=0;
        int n=prices.size();
        for(int price:prices){
            if(price<min){
                min=price;
            }
            if(price-min>profit){
                profit=price-min;
            }
        }
        return profit;
    }
};

int main(){
    Solution s;
    int n;
    cout << "Enter size:";
    cin >> n;
    vector<int> prices;
    for(int i=0;i<n;i++){
        int ele;
        cin >> ele;
        prices.push_back(ele);
    }
    cout << s.maxProfit(prices);
}
