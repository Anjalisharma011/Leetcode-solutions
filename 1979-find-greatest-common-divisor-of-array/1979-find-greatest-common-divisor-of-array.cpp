class Solution {
public:
    int findGCD(vector<int>& nums) {
        int answer=0;
        sort(nums.begin(),nums.end());
        int smallest=nums[0];
        int largest=nums[nums.size()-1];
        return gcd(smallest,largest); 
        }
};