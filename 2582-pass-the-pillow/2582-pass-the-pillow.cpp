class Solution {
 public:
  int passThePillow(int n, int time) {
      int ans;
    time %= (n - 1) * 2;
    if (time < n) {
      ans= 1 + time;
    }
    else{
       ans= n - (time - (n - 1)); 
    }
      return ans;
  }
};