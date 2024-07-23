class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int num:nums){
            int mod=num%3;
            if(mod){
                count+=min(mod,3-mod);
            }
        }
        return count;
    }
};