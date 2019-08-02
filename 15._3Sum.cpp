class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3) return {};
        sort(nums.begin(), nums.end());
        int len = nums.size();
        if(nums[0] > 0 || nums[len - 1] < 0) return {};
        
        unordered_map<int, int> index_dict;
        for(int i = 0; i < nums.size(); i++){
            index_dict[nums[i]] = i;
        }
        
        int last_one =  0 - nums[0] - nums[1] - 1;
        
        set<vector<int>> temp_res;   
        
        for(int i = 0; i < nums.size() - 2; i++){
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < nums.size() - 1; j++){
                while(j < nums.size() - 3 && nums[j]==nums[j+2])
                    j++;
                last_one = 0 - nums[i] - nums[j];
                if(last_one < nums[j])
                    break;
                auto iter = index_dict.find(last_one);
                if(iter == index_dict.end() || iter->second <= j){
                    continue;
                }
                temp_res.insert({nums[i], nums[j], last_one});
                
            }
        }
        
        vector<vector<int>> res = vector<vector<int>>(begin(temp_res), end(temp_res));
        return res;
        
    }
};
