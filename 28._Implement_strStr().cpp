class Solution {
public:
     int strStr(string haystack, string needle) {
        if(needle == ""){
            return 0;
        } else{
            int* next = new int[needle.size()];
            next[0] = -1;
            int i = 0, j = -1, k = 0;
            while(i != needle.size() - 1){
                while(j != -1 && needle[i] != needle[j]){
                    j = next[j];
                }
                next[++i] = ++j;
            }
            i = 0;
            j = 0;
            while(i < haystack.size() && j < int(needle.size())){
                if(j == -1 || haystack[i] == needle[j]){
                    ++i;++j;
                } else{
                    j = next[j];
                }            
            }
            if(j == needle.length()){
                return i - j;
            } else{
                return -1;
            }
        }
    }
};
