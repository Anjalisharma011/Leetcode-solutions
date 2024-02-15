class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (const auto& word : words) {
            bool isPalindrome = true;
            for (int start = 0, end = word.size() - 1; start < end; ++start, --end) {
                if (word[start] != word[end]) {
                    isPalindrome = false;
                    break; 
                }
            }
            if (isPalindrome) {
                return word;
            }
        }
        return "";
    }
};