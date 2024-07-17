class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int size=grid.size();
        vector<vector<int>>transpose(size,vector<int>(size));
        for(int row=0;row<size;row++){
            for(int col=0;col<size;col++){
                transpose[row][col]=grid[col][row];
                }
            }
        int count=0;
    for(auto& rowgrid:grid){
        for(auto& rowtranspose:transpose){
             count += (rowgrid == rowtranspose);
        }
    }
        return count;
    }
};

