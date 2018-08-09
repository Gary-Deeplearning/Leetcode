class Solution {
public:
    bool isValid(string s) {
        int size = s.size();
        if (size == 0 || size % 2 != 0) {
            return false;
        }
        stack<char> stack_char;
        for (int i = 0; i < size; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stack_char.push(s[i]);
            else if (s[i] == ')'){
                if (stack_char.empty())
                    return false;
                else {
                    char c = stack_char.top();
                    stack_char.pop();
                    if (c == '(')
                        continue;
                    else
                        return false;
                }
            }
            else if (s[i] == '}') {
                if (stack_char.empty())
                    return false;
                else {
                    char c = stack_char.top();
                    stack_char.pop();
                    if (c == '{')
                        continue;
                    else
                        return false;
                }
            }
            else if (s[i] == ']') {
                if (stack_char.empty())
                    return false;
                else {
                    char c = stack_char.top();
                    stack_char.pop();
                    if (c == '[')
                        continue;
                    else
                        return false;
                }
            }
        }
        if (stack_char.empty())
            return true;
        return false;
    }
};