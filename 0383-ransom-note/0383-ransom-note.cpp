class Solution {
public:
    bool canConstruct(string ransom_note, string magazine) {
       vector<int>count(26);
        for( char c:magazine){
            count[c-'a']+=1;
        }
         for( char c:ransom_note){
            count[c-'a']-=1;
        if(count[c-'a']<0){
            return false;
        }
         }
        return true;
    }
};