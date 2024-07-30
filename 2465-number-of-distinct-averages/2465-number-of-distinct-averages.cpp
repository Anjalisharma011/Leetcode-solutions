class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        unordered_set<int>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            ans.insert(nums[i]+nums[n-i-1]);
        }
        return ans.size();
    }
};