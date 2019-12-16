class Solution {
public:
    int brokenCalc(int X, int Y) {
        if(X >= Y){
            return X - Y;
        } else{
            int ans = 0;
            while(X < Y){
                if(Y % 2 == 1){
                    Y += 1;
                    ans += 1;
                }
                Y /= 2;
                ans += 1;
            }
            return ans + X -Y;
        }
    }
};
