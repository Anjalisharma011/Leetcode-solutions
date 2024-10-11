class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>count;
        for(int i=0;i<n;i++){
            ++count[nums[i]];
        }
        for(int i=0;i<count.size();i++){
            if(count[i]>1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};