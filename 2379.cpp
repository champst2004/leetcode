// https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/

class Solution {
    public:
        int minimumRecolors(string blocks, int k) {
            int n = blocks.length();
            int res = INT_MAX;
            int temp;
    
            for(int i = 0; i < n - k + 1; i++){
                temp = 0;
                for(int j = i; j < i + k; j++){
                    if(blocks[j] == 'W'){
                        temp++;
                    }
                }
                res = min(temp, res);
            }
            return res;
        }
    };