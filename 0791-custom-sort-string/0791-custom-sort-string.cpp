class Solution {
public:
    string customSortString(string order, string s) {
     int currentcount[26]={};
        string ans;
        for( char c:s){
            currentcount[c-'a']++;
            }
        for(char c:order){
            while(currentcount[c-'a']-->0){
                ans+=c;
            }
        }
        for(int i=0;i<26;i++){
            if(currentcount[i]>0){
                 ans += string(currentcount[i], i + 'a');
            }
        }
        return ans;
    }
};