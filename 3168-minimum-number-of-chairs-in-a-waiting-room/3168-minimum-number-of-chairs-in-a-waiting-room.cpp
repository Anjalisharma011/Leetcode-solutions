class Solution {
public:
    int minimumChairs(string s) {
        int ans=0;
        int chairs=0;
        for(char c:s){
            if(c=='E'){
                chairs+=1;
            }
            else{
                chairs-=1;
            }
            ans=max(chairs,ans);
        }
        return ans;
    }
};