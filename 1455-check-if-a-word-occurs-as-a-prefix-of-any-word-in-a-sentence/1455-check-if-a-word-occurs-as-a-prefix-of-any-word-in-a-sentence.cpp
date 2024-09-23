class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
       stringstream ss(sentence);
        string current_word;
        int index=1;
        while(ss>>current_word){
            if(current_word.find(searchWord)==0){
                return index;
            }
            ++index;
        }
        return -1;
    }
};