class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int day1 = INT_MAX;;
        for(int i=0; i<n-1; i++){
            if(prices[i]<day1) day1 = prices[i];
            if(prices[i+1]>day1) 
                profit = max(profit, prices[i+1]-day1);
        }
        return profit;
    }
};
