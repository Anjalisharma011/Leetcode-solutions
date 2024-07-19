class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count=0;
        int ans=0;
        int n=nums.size();
        for(int l=0, r=0;r<n;r++){
            if(nums[r]==0){
                count++;
                while(count==2){
                    if(nums[l++]==0){
                        count--;
                    }
                }
            }
            ans=max(ans,r-l);
        }
        return ans;
    }
};     