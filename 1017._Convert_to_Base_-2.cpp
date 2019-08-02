class Solution {
public:
    string baseNeg2(int N) {
        string ans =  "";
        int temp = 0;
        if(N == 0)
            return "0";
        while(N){
            temp = N % (-2);
            if(temp == -1){
                ans = "1" + ans;
                N = N / (-2) + 1;
            } else if(temp == 0){
                ans = "0" + ans;
                N = N / (-2);
            } else{
                ans = "1" + ans;
                N = N / (-2);
            }
        }
        return ans;
    }
};
