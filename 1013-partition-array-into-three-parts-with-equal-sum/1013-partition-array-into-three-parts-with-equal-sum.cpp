class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
      int sum = accumulate(arr.begin(),arr.end(),0);
        if(sum%3!=0)
            return false;
        int sum1=sum/3;
        int currsum=0;
        int cursum=0;
        int i=0;
        int j=arr.size()-1;
       while(i<arr.size()){
           currsum+=arr[i];
           if(currsum==sum1){
               break;
           }
           i++;
       }
         while(j>0){
           cursum+=arr[j];
           if(cursum==sum1){
               break;
           }
           j--;
       }
        
       return i<j-1;
    }
};