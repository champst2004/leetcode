// https://leetcode.com/problems/valid-parentheses/description/

class Solution {
    public:
        bool isValid(string s) {
            stack<char> st;
            int len = s.length();
            if(len % 2 == 1) return false;
            for(int i = 0; i < len; i++){
                if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
                else if(s[i] == ')' && !st.empty() && st.top() == '(') st.pop();
                else if(s[i] == '}' && !st.empty() && st.top() == '{') st.pop();
                else if(s[i] == ']' && !st.empty() && st.top() == '[') st.pop();
                else st.push(s[i]);
            }
            return st.empty();
        }
};