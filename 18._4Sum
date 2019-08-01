class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4) return {};
        sort(nums.begin(), nums.end());
        if (target > 0 && target > 4 * nums.back()) return {};
        if (target < 0 && target < 4 * nums.front()) return {};
        
        unordered_map<int, int> index_dict;
        for(int i = 0; i < nums.size(); i++){
            index_dict[nums[i]] = i;
        }
    
        set<vector<int>> temp_res;   
        
        for(int i = 0; i < nums.size() - 3; i++){
            for(int j = i + 1; j < nums.size() - 2; j++){
                for(int k = j + 1; k < nums.size() - 1; k++){
                    int last_one = target - nums[i] - nums[j] - nums[k];
                    if(last_one < nums[k])
                        break;
                    auto iter = index_dict.find(last_one);
                    if(iter == index_dict.end() || iter->second <= k){
                        continue;
                    }
                    temp_res.insert({nums[i], nums[j], nums[k], last_one});
                }
            }
        }
        
        vector<vector<int>> res = vector<vector<int>>(begin(temp_res), end(temp_res));
        return res;
    }
};
