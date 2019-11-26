class Solution {
public:
    int findLHS(vector<int>& nums) {
        int length = nums.size();
        int res = 0;
        unordered_map<int, int> nums_dict;
        for(int i = 0; i < length; i++){
            nums_dict[nums[i]] ++;
        }
        for(auto item: nums_dict){
            if (nums_dict.count(item.first + 1)) {
                res = max(res, nums_dict[item.first] + nums_dict[item.first + 1]);
            }
        }
        return res;
    }
};
