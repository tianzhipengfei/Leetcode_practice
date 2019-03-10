class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int length1 = s1.length(), length2 = s2.length(), sum = 0;
        int dp[length1+1][length2+1];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 0;
        for(int i = 0; i < length1; i++) {
            sum += (int)s1[i];
            for(int j = 0; j < length2; j++) {
                if(s1[i] == s2[j]) {
                    dp[i+1][j+1] = dp[i][j] + (int)s1[i];
                } else {
                    dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
                }
            }
        }
        for(int j = 0; j < length2;j ++) {
            sum += (int)s2[j];
        }
        return sum - 2*dp[length1][length2];  
    }
};
