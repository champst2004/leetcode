// https://leetcode.com/problems/count-total-number-of-colored-cells/description

class Solution {
    public:
        long long coloredCells(int n) {
            return (2*pow(n, 2)) - 2*n + 1;
        }
    };