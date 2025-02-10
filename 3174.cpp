// https://leetcode.com/problems/clear-digits/description/

class Solution {
    public:
        string clearDigits(string s) {
            string ans = "";
            int n = s.length();
            char st[n];
            int top = -1;
            for(int i = 0; i < n; i++){
                if(s[i] >= '0' && s[i] <= '9'){
                    top--;
                }
                else{
                    st[++top] = s[i];
                }
            }
            if(top < 0){
                return ans;
            }
            else{
                for(int i = 0; i <= top; i++){
                    ans += st[i];
                }
            }
            return ans;
        }
    };