class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int cur = 0, length = flowerbed.size();
        if(n == 0)
            return true;
        if(length == 1){
            if(flowerbed[0] == 0)
                return true;
            else
                return false;
        } else{
            while(n > 0 && cur < length){
                if(flowerbed[cur] == 0){
                    if(cur == 0){
                        if(flowerbed[1] == 0){
                            flowerbed[0] = 1;
                            n--;
                        }
                    } else if(cur == length - 1){
                        if(flowerbed[length - 2] == 0){
                            flowerbed[length - 2] = 1;
                            n--;
                        }
                    } else if((flowerbed[cur - 1] == 0) && (flowerbed[cur + 1] == 0)){
                        flowerbed[cur] = 1;
                        n--; 
                    }
                }
                cur++;
            }
            if(n == 0)
                return true;
            else
                return false;
        }
    }
};
