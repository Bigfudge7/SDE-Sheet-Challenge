class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = prices[0];
        int mxpro = -1;
        for(int i = 0 ; i < prices.size() ; i++){
            ans = min(ans,prices[i]);
            mxpro = max(mxpro , prices[i] - ans);
        }
        return mxpro;
    }
    };