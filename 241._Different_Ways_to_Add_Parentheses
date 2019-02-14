#include <string>
#include <map>
#include <vector>
using namespace std;

class Solution {
private:
    map<string, vector<int>> memory;
    
public:
    vector<int> diffWaysToCompute(string input) {
        if(memory.find(input) != memory.end()){
            return memory[input];
        } else{
            vector<int> res;
            int len = input.length();
            for(int i = 0; i < len ; i++){
                char cur_char = input[i];
                if (cur_char == '+' || cur_char == '-' || cur_char == '*'){
                    vector<int> left = diffWaysToCompute(input.substr(0, i));
                    vector<int> right = diffWaysToCompute(input.substr(i + 1));
                    for (int left_res: left){
                        for(int right_res: right){
                            switch(cur_char){
                                case '+':
                                    res.push_back(left_res + right_res);
                                    break;
                                case '-':
                                    res.push_back(left_res - right_res);
                                    break;
                                case '*':
                                    res.push_back(left_res * right_res);
                            }
                        }
                    }
                }
            }
            if(res.empty()){
                // cout << atoi(input.c_str());
                res.push_back(atoi(input.c_str()));
            }
            memory[input] = res;
            return res;
        }
    }
};
