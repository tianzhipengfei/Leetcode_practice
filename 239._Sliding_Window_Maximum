class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k == 1 || nums.size() == 0){
            return nums;
        } else{
            set<int> num_set;
            unordered_map<int, int> num_dict;
            int max = nums[0];
            vector<int> ans;
            for(int i = 0; i < k; i++){
                num_dict[nums[i]]++;
                num_set.insert(nums[i]);
            }
            ans.push_back(*(--num_set.end()));
            for(int i = k; i < nums.size(); i++){
                int rem = nums[i - k], ins = nums[i];
                if(rem == ins){
                    ans.push_back(*(--num_set.end()));
                } else{
                    num_dict[rem]--;
                    num_dict[ins]++;
                    num_set.insert(ins);
                    if(num_dict[rem] == 0)
                        num_set.erase(rem);
                    ans.push_back(*(--num_set.end()));
                }
            }
            return ans;
        }
    }
};
