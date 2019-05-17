class Solution {
public:
    int row,col;
    bool validbox(int i, int j){
        return (i>=0 && i<row && j>=0 && j<col);
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        row = board.size();
        col = board[0].size();
        vector<vector<int>> copy(row,vector<int>(col,0));
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                copy[i][j]=board[i][j];
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int count=0;
                if(validbox(i+1,j)&&copy[i+1][j]==1)
                    count++;
                if(validbox(i,j+1)&&copy[i][j+1]==1)
                    count++;
                if(validbox(i+1,j+1)&&copy[i+1][j+1]==1)
                    count++;
                if(validbox(i-1,j+1)&&copy[i-1][j+1]==1)
                    count++;
                if(validbox(i-1,j)&&copy[i-1][j]==1)
                    count++;
                if(validbox(i-1,j-1)&&copy[i-1][j-1]==1)
                    count++;
                if(validbox(i,j-1)&&copy[i][j-1]==1)
                    count++;
                if(validbox(i+1,j-1)&&copy[i+1][j-1]==1)
                    count++;
                if(count<2)
                    board[i][j]=0;
                if(count>3)
                    board[i][j]=0;
                if(count==3)
                    board[i][j]=1;
            }
        }
    }
};