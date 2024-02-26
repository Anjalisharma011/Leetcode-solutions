class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int curr=0;
        for(const int g:gain){
            curr+=g;
            ans=max(ans,curr);
        }
        return ans;
    }
};