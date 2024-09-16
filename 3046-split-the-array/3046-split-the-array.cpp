class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int frequency[101]={};
        for(int num:nums){
            frequency[num]++;
        
        if(frequency[num]>=3){
            return false;
        }
        }
                return true;
    }
};