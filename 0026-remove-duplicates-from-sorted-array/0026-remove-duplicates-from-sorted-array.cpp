class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       auto newend=unique(nums.begin(),nums.end());
        nums.erase(newend,nums.end());
        return nums.size();
    }
};