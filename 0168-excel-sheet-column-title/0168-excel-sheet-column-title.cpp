class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
      while(columnNumber>0){
          columnNumber--;
          int remainder=columnNumber%26;
          s.insert(s.begin(),'A'+remainder);
          columnNumber/=26;
      }
        return s;
    }
};