class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>trustothers(n+1,0);
            vector<int>trustbyothers(n+1,0);
        for(const auto& relation:trust){
            int truster=relation[0];
            int trustee=relation[1];
            trustothers[truster]++;
                trustbyothers[trustee]++;
        }
            for(int i=1;i<=n;i++){
                if(trustothers[i]==0 && trustbyothers[i]==n-1){
                    return i;
                }
            }
        return -1;
    }
};