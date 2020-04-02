class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& A, int L, int M) {
        //two dynamic programming
        int len = A.size();
        if (len < M + L){
            return 0;
        }
        vector<int> pre_sum = A;
        for(int i = 1; i < len; i++){
            pre_sum[i] += pre_sum[i-1];
        }
        int res = pre_sum[L + M - 1], max_L = pre_sum[L - 1], max_M = pre_sum[M - 1];
        for(int i = L + M; i < len; i++){
            max_L = max(max_L, pre_sum[i - M] - pre_sum[i - L - M]);
            max_M = max(max_M, pre_sum[i - L] - pre_sum[i - L - M]);
            res = max(res, max(max_L + pre_sum[i] - pre_sum[i - M], max_M + pre_sum[i] - pre_sum[i - L]));
        }
        return res;
    }
};