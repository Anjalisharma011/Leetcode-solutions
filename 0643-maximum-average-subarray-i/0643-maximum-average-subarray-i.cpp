class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int average;
        int currsum=0;
        int maxsum=0;
        for(int i=0;i<k;i++){
            currsum+=nums[i];
        }
        maxsum=currsum;
        for(int i=k;i<nums.size();i++){
         currsum+=nums[i]-nums[i-k];
             maxsum=std::max(maxsum,currsum);
        }
        return static_cast<double> (maxsum)/k;;
    }
};