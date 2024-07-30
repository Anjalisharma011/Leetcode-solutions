class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int ans=1<<30;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
           ans=min(ans,nums[n-i-1]+nums[i]);
        
        }
        return ans/2.0;
    }
    
}; 