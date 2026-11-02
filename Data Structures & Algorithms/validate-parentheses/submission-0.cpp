#include <stdio.h>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;
        std::unordered_map<char, char> x = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };
        for (char c : s){
            if (x.count(c)){
                if (!stack.empty() && stack.top() == x[c]){
                    stack.pop();
                }else{
                    return false;
                }
            }else{
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
