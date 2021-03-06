class FreqStack {
private:
    unordered_map<int, stack<int>> freq_number_dict;
    unordered_map<int, int> number_freq_dict;
    int max_freq;
public:
    FreqStack() {
        max_freq = 0;
    }
    
    void push(int x) {
        freq_number_dict[++number_freq_dict[x]].push(x);
        if(number_freq_dict[x] > max_freq){
            max_freq = number_freq_dict[x];
        }
    }
    
    int pop() {
        int res = freq_number_dict[max_freq].top();
        freq_number_dict[max_freq].pop();
        number_freq_dict[res]--;
        if(freq_number_dict[max_freq].empty()){
            max_freq--;
        }
        return res;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack obj = new FreqStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 */
