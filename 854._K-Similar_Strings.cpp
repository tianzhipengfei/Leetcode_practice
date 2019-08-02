class Solution {
public:
    int kSimilarity(string A, string B) {
        if(A == B) return 0;
        int i = 0;
        for(; i < A.size(); i++){
            if(A[i] != B[i]){
                break;
            }
        }
        int step = 0;
        queue<pair<string, int>> str_que;
        unordered_set<string> visited;
        str_que.push(make_pair(A, i));
        visited.insert(A);
        while(str_que.size()){
            int num = str_que.size();
            for(int j = 0; j < num; j++){
                string temp_str = str_que.front().first;
                int index = str_que.front().second;
                str_que.pop();
                while(index < B.size() && temp_str[index] == B[index]) index++;
                for(int k = index + 1; k < B.size(); k++){
                    if(temp_str[k] == B[index] && temp_str[k] != B[k]){
                        swap(temp_str[k], temp_str[index]);
                        if(!visited.count(temp_str)){
                            if(temp_str == B) {
                                return step + 1;
                            }
                            str_que.push(make_pair(temp_str, index + 1));
                            visited.insert(temp_str);
                        }
                        swap(temp_str[k], temp_str[index]);
                    }
                }
            }
            step += 1;
        }
        return step;
    }
};
