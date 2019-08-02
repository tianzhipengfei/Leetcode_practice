class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double dict[query_row+1][query_row+1] = {0};
        dict[0][0] = (double)poured;
        for(int i = 0; i < query_row; ++i){
            for(int j = 0; j <= i; ++j){
                if(dict[i][j] > 1){
                    dict[i+1][j] += (dict[i][j] - 1) / 2;
                    dict[i+1][j+1] += (dict[i][j] - 1) / 2;
                }
            }
        }
        if(dict[query_row][query_glass] > 1){
            return 1;
        } else{
            return dict[query_row][query_glass];
        }
    }
};
