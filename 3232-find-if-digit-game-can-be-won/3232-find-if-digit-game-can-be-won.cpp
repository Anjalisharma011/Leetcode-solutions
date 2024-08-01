class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]<10){
                count1+=nums[i];
            }
            else{
                count2+=nums[i];
            }
        }
        return count1!=count2;
    }
};