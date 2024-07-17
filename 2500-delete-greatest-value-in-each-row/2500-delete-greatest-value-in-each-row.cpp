class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int row_size=grid.size();
        int col_size=grid[0].size();
        for(auto& row:grid){
            sort(row.begin(),row.end());
        }
        int answer=0;
        for(int i=0;i<col_size;i++){
          int maxincol=0;
            for(int j=0;j<row_size;j++){
                maxincol=max(maxincol,grid[j][i]);
            }
            answer+=maxincol;
        }
        return answer;
    }
};

