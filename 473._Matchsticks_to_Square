class Solution {
public:
    bool makesquare(vector<int>& nums) {
        int len = nums.size();
        long long total = 0;
        for(int i = 0; i < len; i++){
            total += nums[i];
        }
        if(total % 4 || total == 0) return false;
        int each_len = total / 4;
        sort(nums.begin(), nums.end());
        vector sides = {0, 0, 0, 0};
        return devide(nums, sides, len - 1, each_len);
    }
    
    bool devide(vector<int> nums, vector<int> sides, int pos, int each_len){
        if(pos == -1){
            return (sides[0] == each_len) && (sides[1] == each_len) && (sides[2] == each_len) && (sides[3] == each_len);
        }
        //cout << pos << " " << nums[pos] << " " << sides [0] << " " << sides [1] << " " << sides [2] << " " << sides [3] << " " << each_len << endl;
        for(int i = 0; i < 4; i++){
            if(sides[i] + nums[pos] <= each_len){
                sides[i] += nums[pos];
                if(devide(nums, sides, pos - 1, each_len))
                    return true;
                sides[i] -= nums[pos];
            }
        }
        return false;
    }
};
