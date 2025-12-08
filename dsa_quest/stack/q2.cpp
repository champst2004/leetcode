// https://leetcode.com/problems/evaluate-reverse-polish-notation/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_map<string, function<int(int,int)>> ops = {
            {"+", [](int a, int b) { return a + b; }},
            {"-", [](int a, int b) { return a - b; }},
            {"*", [](int a, int b) { return a * b; }},
            {"/", [](int a, int b) { return a / b; }}
        };
        stack<int> st;
        for (const string& tok : tokens){
            if (ops.count(tok)){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int res = ops[tok](a, b);
                st.push(res);
            } 
            else st.push(stoi(tok));
        }
        return st.top();
    }
};