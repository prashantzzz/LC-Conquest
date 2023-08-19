class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pr=0;
        int least=INT_MAX;
        for(int i=0; i<prices.size(); i++){
            least=min(least,prices[i]);
            pr=max((prices[i]-least),pr);
        }
        return pr;
    }
};