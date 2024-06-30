class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>mergedintervals;
        mergedintervals.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(mergedintervals.back()[1]<intervals[i][0]){
                mergedintervals.push_back(intervals[i]);
            }
            else{
                mergedintervals.back()[1]=max(mergedintervals.back()[1],intervals[i][1]);
            }
            
        }
        return mergedintervals;
    }
};