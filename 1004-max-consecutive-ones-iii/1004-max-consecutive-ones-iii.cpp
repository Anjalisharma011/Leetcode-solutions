class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int max_ones=0;
        int left=0;
        int right=0;
        while(right<n){
            if(nums[right]==0){
                k--;
            }
            right++;
            while(k<0){
            if(nums[left]==0){
                k++;
            }
                left++;
            }
                max_ones=max(max_ones,right-left);
        }
        return max_ones;
    }
};