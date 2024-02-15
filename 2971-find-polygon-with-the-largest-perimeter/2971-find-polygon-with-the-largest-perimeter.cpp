class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long perimeter =0;
        long long remainingsidesum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<remainingsidesum){
                perimeter=remainingsidesum+nums[i];
            }
            remainingsidesum+=nums[i];
            
        }
        return perimeter==0?-1:perimeter;
    }
};