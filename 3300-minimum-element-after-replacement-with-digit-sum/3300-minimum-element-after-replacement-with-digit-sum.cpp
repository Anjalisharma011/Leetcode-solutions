class Solution {
public:
        int solve(int x){
            int sum=0;
            while(x!=0){
            sum+=x%10;
            x=x/10;
        }
        return sum;
        }
    int minElement(vector<int>& nums) {
        for(int& num:nums){
            num=solve(num);
        }
      sort(nums.begin(),nums.end());
        return nums[0];
    }
};