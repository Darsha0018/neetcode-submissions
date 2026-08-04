class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxprofit=0;
        int mini=INT_MAX;
        for(int i =0;i<n;i++){
            mini=min(prices[i],mini);
            maxprofit=max(maxprofit,prices[i]-mini);
        
        }
        return maxprofit;
    }
};
