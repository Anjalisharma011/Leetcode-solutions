class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
      int  count[1001]{};
        vector<int>ans;
            for(auto& num:nums){
                for(int& x:num){
                    ++count[x];
                }
                for(int x=0;x<1001;x++){
                if(count[x]==nums.size()){
                    ans.push_back(x);
                }
                }
            }
        return ans;
    }
};