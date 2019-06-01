class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int length = nums.size();
        vector<int> ans;
        bool flag[length] = {false};
        long long total_sum = (length + 1) * length / 2;
        for(int i = 0; i < length; i++){
            if(flag[nums[i] - 1])
                ans.push_back(nums[i]);
            else
                flag[nums[i] - 1] = true;
            total_sum -= nums[i];
        }
        ans.push_back(total_sum + ans[0]);
        return ans;
    }
};
