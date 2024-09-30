class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=0, maxprofit=0;
        for(int s=1; s < prices.size(); ++s){
            if (prices[s] < prices[b]){
                b = s;
            }
            else{
                maxprofit = max(prices[s]-prices[b], maxprofit);
            }
        }
        return maxprofit;
    }
};