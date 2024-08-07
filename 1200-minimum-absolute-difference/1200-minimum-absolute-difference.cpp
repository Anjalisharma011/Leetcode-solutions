class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        int diff=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            const int min_diff=arr[i]-arr[i-1];
            if(min_diff<diff){
                diff=min_diff;
                ans.clear();
            }
            if(diff==min_diff)
                ans.push_back({arr[i-1],arr[i]});
            
            
        }
        return ans;
    }
};