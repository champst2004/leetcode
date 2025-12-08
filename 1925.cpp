// https://leetcode.com/problems/count-square-sum-triples/

class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int i = 1; i < n + 1; i++){
            for(int j = 1; j < n + 1; j++){
                int c = int(sqrt(i*i + j*j + 1.0));
                if(c <= n and c*c == i*i + j*j) count++;
            }
        }
        return count;
    }
};