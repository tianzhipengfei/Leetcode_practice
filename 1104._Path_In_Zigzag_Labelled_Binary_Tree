class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        vector<int> ans;
        int num=1;
        while(num <= label){
            num = num*2;
        }
        num /= 2;
        while(label>=1 && num >= 1){
            ans.push_back(label);
            label /= 2;
            label = num - 1 - label + num / 2;
            num /= 2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
