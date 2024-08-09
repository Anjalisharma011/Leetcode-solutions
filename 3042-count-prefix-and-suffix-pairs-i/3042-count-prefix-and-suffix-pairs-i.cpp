class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n;i++){
            string prefix=words[i];
            for(int j=i+1;j<n;j++){
                string word=words[j];
                if(word.find(prefix)==0 && word.rfind(prefix)==word.length()-prefix.length()){
                    count++;
                }
            }
        }
        return count;
    }
};