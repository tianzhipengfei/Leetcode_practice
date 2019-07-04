class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        int len = A.size(), ans = 0;
        unordered_map<long long, int> a;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(a.find((-1) * (A[i] + B[j])) == a.end()){
                    a[(-1) * (A[i] + B[j])] = 1;
                } else{
                    a[(-1) * (A[i] + B[j])] ++;
                }
            }
        }
        
        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(a.find(C[i] + D[j]) != a.end()){
                    ans += a[C[i] + D[j]];
                }
            }
        }
        return ans;
    }
};
