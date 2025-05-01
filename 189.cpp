// https://leetcode.com/problems/rotate-array/description/

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            vector<int> temp(n , 0);
            for(int i = 0; i < n; i++){
                temp[(i+k)%n] = nums[i];
            }
            nums = temp;
        }
    };

// for inplace rotation

class Solution {
    public:
        void rotate(vector<int>& nums, int k){
            int n = nums.size();
            k = k % n;
            reverse(nums.begin() + (n - k), nums.end()); // Reverse the last k elements
            reverse(nums.begin(), nums.begin() + (n - k)); // Reverse the first n - k elements
            reverse(nums.begin(), nums.end()); // Reverse the entire array
        }
    };