class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int n:nums){
            if(n==1){
            count++;
            }
            else{
                 ans=max(ans,count);
                count=0;
            }
        }
        return max(ans,count);
    }
};