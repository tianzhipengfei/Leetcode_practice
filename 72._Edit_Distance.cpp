class Solution {
public:
    int minDistance(string word1, string word2) {
        if(word1 == "" || word2 == ""){
            return max(word1.size(), word2.size());
        }
        int len1 = word1.size() + 1, len2 = word2.size() + 1;
        int dp[len1][len2] = {0};
        for(int i = 0; i < len1; i++){
            dp[i][0] = i;
        }
        for(int i = 0; i < len2; i++){
            dp[0][i] = i;
        }
        for(int i = 1; i < len1; i++){
            for(int j = 1; j < len2; j++){
                int flag = 0;
                if(word1[i-1] != word2[j-1]){
                    flag = 1;
                }
                dp[i][j] = min(min(dp[i-1][j] + 1, dp[i][j-1] + 1), dp[i-1][j-1] + flag);
            }
        }
        return dp[len1-1][len2-1];
    }
};
