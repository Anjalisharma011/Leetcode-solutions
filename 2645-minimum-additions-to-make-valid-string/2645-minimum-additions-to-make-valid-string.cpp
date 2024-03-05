class Solution {
public:
    int addMinimum(string word) {
        const string letter="abc";
        int ans=0;
        int i=0;
        while(i<word.length()){
            for(const char c:letter){
                if(i<word.length() && word[i]==c){
                    i++;
                }
                else 
                    ans++;
            }
        }
        return ans;
    }
};