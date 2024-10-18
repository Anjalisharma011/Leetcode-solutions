class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n=apple.size();
        int m=capacity.size();
        int apple_sum=0;
        for(int i=0;i<n;i++){
            apple_sum+=apple[i];
        }

       sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());
      int capacity_sum=0;
       for(int j=0;j<m;j++)
        {
            
                capacity_sum+=capacity[j];
               if(capacity_sum>=apple_sum){
                   return j+1;
               }
                
            
        }
        return m;
    }
};