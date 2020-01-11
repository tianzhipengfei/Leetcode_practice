

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    
    *returnSize = 0;
    if (nums1Size == 0 || nums2Size == 0){
        return NULL;
    }
    
    int minNum = nums1[0], maxNum = nums1[0];
    for(int i = 0; i < nums1Size; i++){
        if (minNum > nums1[i]){
            minNum = nums1[i];
        }
        if (maxNum < nums1[i]){
            maxNum = nums1[i];
        }
    }
    
    int *num_dict = (int *) calloc((long)maxNum - minNum, sizeof(int));
    // memset(num_dict, 0, (maxNum - minNum + 1) * sizeof(int)); 
    int *res = NULL;
    
    
    for(int i = 0; i < nums1Size; i++){
        num_dict[(long long)nums1[i] - minNum]++;
    }
    
    for(int i = 0; i < nums2Size; i++){
        if (nums2[i] < minNum || nums2[i] > maxNum){
            continue;
        }
        if(num_dict[(long long)nums2[i] - minNum]){
            num_dict[(long long)nums2[i] - minNum]--;
            *returnSize = *returnSize + 1;
            res = (int*) realloc(res, (*returnSize) * sizeof(int));
            res[*returnSize - 1] = nums2[i];
        }
    }
    
    free(num_dict);
    return res;
}

