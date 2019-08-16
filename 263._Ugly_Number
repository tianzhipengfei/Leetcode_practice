class Solution {
public:
    bool isUgly(int num) {
        if(num <= 0)
            return false;
        bool flag = true;
        while(num % 5 == 0){
            num /= 5;
        }
        while(num % 3 == 0){
            num /= 3;
        }
        while(num % 2 == 0){
            num /= num & (~(num - 1));;
        }
        return num == 1;
    }
};
