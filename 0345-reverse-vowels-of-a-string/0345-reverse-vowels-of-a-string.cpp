class Solution {
public:
    string reverseVowels(string s) {
       bool isVowel[128] = {false};
        for (char c : "aeiouAEIOU") {
            isVowel[c] = true;
        }
        int left = 0, right = s.size() - 1;
        while (left < right) {
            while (left < right && !isVowel[s[left]]) {
                ++left;
            }
            while (left < right && !isVowel[s[right]]) {
                --right;
            }
            if (left < right) {
                std::swap(s[left++], s[right--]);
            }
        }
        return s;
    }
};