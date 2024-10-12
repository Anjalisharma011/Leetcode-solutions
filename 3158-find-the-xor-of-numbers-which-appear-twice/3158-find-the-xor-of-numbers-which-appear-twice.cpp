class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int max=50;
        vector<int>count(max+1);
        int n=nums.size();
        int ans=0;
        for(int num:nums){
            ++count[num];
        }
        for(int i=1;i<=max;i++){
            if(count[i]==2){
                ans^=i;
            }
        }
        return ans;
    }
};