class Solution {
public:
    bool isHappy(int n) {
       while(n != 1){
           if(n == 4){
               return false;
           }
           int temp = 0;
           while(n != 0){  
               temp += (n % 10) * (n % 10);
               n /= 10;
           }
           n = temp;
       } 
        return true;
    }
};
