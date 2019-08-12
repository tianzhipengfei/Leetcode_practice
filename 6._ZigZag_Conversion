class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows <= 1 || numRows >= s.length()){
            return s;
        }
        else{
            int gap = 0, pos = 0, flag = 0;
            string res = "";
            for (int i = 0; i < numRows; i++){
                flag = 1;
                pos = i;
                while(pos < s.length()){
                    if(flag){
                        gap = (numRows - i - 1) + (numRows - i - 1);
                    } else{
                        gap = 2 * i;
                    }
                    if(gap <= 0){
                        flag =! flag;
                        continue;
                    }
                    res += s[pos];
                    pos += gap;
                    flag = !flag;
                }
            }
            return res;
        }
    }
};
