class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>positive;
        vector<int>negative;
        for(int num:nums){
            if(num>0){
                positive.push_back(num);
            }
            else{
                negative.push_back(num);
            }
        }
        for(int i=0;i<n/2;i++){
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
        }
        return ans;
    }
};