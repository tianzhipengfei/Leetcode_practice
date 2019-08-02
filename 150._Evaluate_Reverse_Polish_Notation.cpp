#include <stack>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> operator1;
        for(int i = 0; i < tokens.size(); ++i){
            if (tokens[i] == "+"){
                int num1 = operator1.top();
                operator1.pop();
                int num2 = operator1.top();
                operator1.pop();
                operator1.push(num1 + num2);
            } else if (tokens[i] == "-"){
                int num1 = operator1.top();
                operator1.pop();
                int num2 = operator1.top();
                operator1.pop();
                operator1.push(num2 - num1);
            } else if (tokens[i] == "*"){
                int num1 = operator1.top();
                operator1.pop();
                int num2 = operator1.top();
                operator1.pop();
                operator1.push(num1 * num2);
            } else if (tokens[i] == "/"){
                int num1 = operator1.top();
                operator1.pop();
                int num2 = operator1.top();
                operator1.pop();
                operator1.push(num2 / num1);
            } else{
                int num = atoi(tokens[i].c_str());
                operator1.push(num);
            }
        }
        return operator1.top();
    }
};
