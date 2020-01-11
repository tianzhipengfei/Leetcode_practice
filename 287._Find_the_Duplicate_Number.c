

int findDuplicate(int* nums, int numsSize){
    int left = 1, right = numsSize - 1, mid;
    while(left <= right){
        int cnt = 0;
        mid = left + (right - left) / 2;
        for(int i = 0; i < numsSize; i++){
            if(nums[i] <= mid){
                cnt++;
            }
        }
        if(cnt > mid){
            right = mid - 1;
        } else{
            left = mid + 1;
        }
    }
    return right + 1;
}

