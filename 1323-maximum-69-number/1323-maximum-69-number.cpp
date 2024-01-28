class Solution {
public:
    int maximum69Number (int num) {
        string numstr=to_string(num);
        for(char& ch:numstr){
            if(ch=='6'){
                ch='9';
                break;
            }
        }
        return stoi(numstr);
    }
};