class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
         const int m = grid.size();
    const int n = grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
            if(grid[i][j]<0)
                count+=1;
        }  
        }
        return count;
    }
};