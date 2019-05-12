class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> rowmax;
        vector<int> colmax;
        rowmax.resize(grid.size(),0);
        colmax.resize(grid[0].size(),0);
        if(grid.size()==0)
            return 0;
        for(int i=0;i<grid.size();i++){
            int temrowmax=0;
            for(int j=0;j<grid[0].size();j++){
                rowmax[i]=max(rowmax[i],grid[i][j]);
                colmax[j]=max(colmax[j],grid[i][j]);
            }
        }
        
        int ans=0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
                ans += min(rowmax[i], colmax[j]) - grid[i][j];

        return ans;
        
        
    }
};