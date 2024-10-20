class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        ranges::sort(maximumHeight,greater<int>());
        int max=1<<30;
        long long ans=0;
        for(int x:maximumHeight){
            x=min(max-1,x);
            if(x<=0){
                return -1;
            }
            ans+=x;
            max=x;
        }
        return ans;
    }
};