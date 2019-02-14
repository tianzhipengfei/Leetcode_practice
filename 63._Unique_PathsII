class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[0][0] == 1){
            return 0;
        }
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        long long ans[100];
        ans[0] = 1;
        for(int i = 1; i < col; i++){
            if(obstacleGrid[0][i] == 0){
                ans[i] = ans[i-1];
            } else{
                ans[i] = 0;
            }
        }
        for(int i = 1; i < row; i++){
            if(obstacleGrid[i][0] == 1){ 
                ans[0] = 0;
            }
            for (int j = 1; j < col; j++){
                if(obstacleGrid[i][j] == 1){
                    ans[j] = 0;
                } else{
                    ans[j] = ans[j-1] + ans[j];
                }
            }
        }
        return ans[col-1];
    }
};
