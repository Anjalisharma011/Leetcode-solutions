class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>m;
        for(string word:arr){
            m[word]++;
        }
           for(string word:arr){
            if(m[word]==1 && --k==0){
                return word;
            }
        }
        return "";
    }
};