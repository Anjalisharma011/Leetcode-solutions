class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int min_price=prices[0];
        for(int price:prices){
            ans=max(ans,price-min_price);
            min_price=min(min_price,price);
        }
        return ans;
    }
};