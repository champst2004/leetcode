// https://leetcode.com/problems/number-of-employees-who-met-the-target/description/

class Solution {
    public:
        int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
            int count;
            int n = hours.size();
            for(int i = 0; i < n; i++){
                if(hours[i] >= target) count++;
            }
            return count;
        }
    };