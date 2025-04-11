// https://leetcode.com/problems/count-symmetric-integers/

class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            string str;
            int ans = 0, len, sum1, sum2;
            for(int i = low; i <= high; i++){
                sum1 = 0;
                sum2 = 0;
                str = to_string(i);
                len = str.length();
                if(len % 2 == 0){
                    for(int j = 0; j < len/2; j++){
                        sum1 += (str[j] - '0');
                    }
                    for(int j = len/2; j < len; j++){
                        sum2 += (str[j] - '0');
                    }
                    if(sum1 == sum2) ans++;
                }
            }
            return ans;
        }
};