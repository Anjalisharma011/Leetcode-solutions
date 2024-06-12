class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = -1, right = nums.size(), current = 0;
        while (current < right) { 
            if (nums[current] == 0) {
                swap(nums[++left], nums[current++]);
            } 
            else if (nums[current] == 2) {
                swap(nums[--right], nums[current]);
            } 
            else {
                ++current;
            }
        }
    }
};
