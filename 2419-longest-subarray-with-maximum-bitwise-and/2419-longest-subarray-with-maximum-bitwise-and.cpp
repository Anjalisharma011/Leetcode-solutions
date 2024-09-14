class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int longest_array=0;
        int current_len=0;
        vector<int>array;
        for(int i=0;i<nums.size();i++){
            array.push_back(nums[i]);
        }
        sort(array.begin(),array.end());
        int max_val=array[nums.size()-1];
       
        for(int num:nums){
            if(num==max_val){
                current_len++;
                longest_array=max(longest_array,current_len);
            }
            else{
                current_len=0;
            }
        }
        return longest_array;
    }
};