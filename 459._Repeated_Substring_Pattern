class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int next[s.length()+1];
        next[0] = -1;
        int i = 0, j = -1;
        while(i < s.length())
        {
            if( j == -1 || s[i] == s[j])
                next[++i] = ++j;
            else j = next[j];
        }
        return (s.length()%(s.length()-next[s.length()])==0)&&next[s.length()];
    }
};
