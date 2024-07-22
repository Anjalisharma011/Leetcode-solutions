class Solution {
public:
    bool isIsomorphic(string s, string t) {
       int mapping_s[256]={0};
        int mapping_t[256]={0};
        int n=s.length();
        bool ans;
        for(int i=0;i<n;i++){
            if(mapping_s[s[i]]!=mapping_t[t[i]]){
                return false;
            }
         mapping_s[s[i]]=i+1;
            mapping_t[t[i]]=i+1;
        }
        return true;
    }
};