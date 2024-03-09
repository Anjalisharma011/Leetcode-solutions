class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count=0;
        map<string,int>m,m1;
        for(string word:words1){
            m[word]++;
        }
         for(string word:words2){
            m1[word]++;
        }
          for(string word:words1){
            if(m[word]==1 && m1[word]==1){
                count+=1;
            }
        }
        
        return count;
    }
};