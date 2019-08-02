class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        int temp[k] = {0};
        vector<double> res;
        if(k == 1){
            for(int i = 0; i < nums.size(); i++)
                res.push_back((double)nums[i]);
        } else{
            double cur_res = 0.0;
            for(int i = 0; i < k; i++){
                temp[i] = nums[i];
            }
            sort(temp, temp + k);
            if(k%2)
                cur_res = temp[k/2];
            else
                cur_res = ((double)temp[k/2] + (double)temp[k/2-1]) / 2;
            res.push_back(cur_res);
            for(int i = k; i < nums.size(); i++){
                int new_element = nums[i];
                int old_element = nums[i-k];
                if(new_element == old_element)
                    res.push_back(cur_res);
                else{
                    int index = binary_search(temp, k, old_element);
                    if(new_element > old_element){
                        while(index < k - 1 && temp[index + 1] < new_element){
                            temp[index] = temp[index + 1];
                            index++;
                        }
                        temp[index] = new_element;
                    } else{
                        while(index > 0 && temp[index - 1] > new_element){
                            temp[index] = temp[index - 1];
                            index--;
                        }
                        temp[index] = new_element;
                    }
                    if(k%2)
                        cur_res = temp[k/2];
                    else
                        cur_res = ((double)temp[k/2] + (double)temp[k/2-1]) / 2;
                    res.push_back(cur_res);
                }
            }
        }
        return res;
    }
    int binary_search(int *arr, int len, int x){
        int l = 0, r = len;
        while (l <= r) { 
            int m = l + (r - l) / 2; 
            if (arr[m] == x) 
                return m; 
            if (arr[m] < x) 
                l = m + 1; 
            else
                r = m - 1; 
        } 
        return -1; 
    }
};
