class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string, vector<string>> dict;
        for(string str : strs){
            string temp_str = str;
            sort(temp_str.begin(), temp_str.end());
                dict[temp_str].push_back(str);
        }
        for(auto dict_item : dict){
            res.push_back(dict_item.second);
        }
        return res;
    }
};
