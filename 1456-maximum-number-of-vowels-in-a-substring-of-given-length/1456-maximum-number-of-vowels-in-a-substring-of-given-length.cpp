class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        int count=0;
        int max_count=0;
        for(int i=0;i<k;i++){
            count+=is_vowel(s[i]);
            max_count=count;
        }
        for(int i=k;i<n;i++){
            count+=is_vowel(s[i]);
            count-=is_vowel(s[i-k]);
            max_count=max(max_count,count);
        }
        return max_count;
    }
       bool is_vowel(char c){
           return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';   
    }
};