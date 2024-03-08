class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>count(101);
        int result=0;
        int max_freq=0;
        for(int &num:nums){
            count[num]++;
            max_freq=max(max_freq,count[num]);
        }
        for(int i=0;i<101;i++){
            if(count[i]==max_freq){
                result+=max_freq;
            }
        }
        return result;
    }
};