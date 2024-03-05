class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer;
        for(int i=0;i<max(word1.length(),word2.length());i++){
            if(i<word1.length()){
                answer+=word1[i];
            }
             if(i<word2.length()){
                answer+=word2[i];
            }
            
        }
    return answer;
    }
};