class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int least=prices[0];
        int ans=0; //max_profit
        for(int i=0; i<prices.size(); i++){
            least=min(least,prices[i]);
            ans=max(ans,prices[i]-least);
        }

        return ans;
    }
};