class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            int flag[9]={0};
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    continue;
                } else{
                    if(flag[board[i][j] - '1'] == 1){
                        return false;
                    } else{
                        flag[board[i][j] - '1'] = 1;
                    }
                }
            }
        }
        
        for(int i = 0; i < 9; i++){
            int flag[9]={0};
            for(int j = 0; j < 9; j++){
                if(board[j][i] == '.'){
                    continue;
                } else{
                    if(flag[board[j][i] - '1'] == 1){
                        return false;
                    } else{
                        flag[board[j][i] - '1'] = 1;
                    }
                }
            }
        }
        
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int flag[9]={0};
                for(int k = 0; k < 9; k++){
                    if(board[i * 3 + k / 3][j * 3 + k % 3] == '.'){
                        continue;
                    } else{
                        if(flag[board[i * 3 + k / 3][j * 3 + k % 3] - '1'] == 1){
                            return false;
                        } else{
                            flag[board[i * 3 + k / 3][j * 3 + k % 3] - '1'] = 1;
                        }
                    }
                }
            }
        }
        return true;
    }
};
