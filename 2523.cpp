//https://leetcode.com/problems/closest-prime-numbers-in-range/description/

class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
            vector<int> arr(right + 1, true);
            vector<int> ans = {-1,-1};
            arr[0] = arr[1] = false;
            int temp = -1;
            int Diff = INT_MAX;
            int diff;
            int count = 0;
    
            for(int i = 2; i*i <= right; i++){
                if(arr[i]){
                    for(int j = i*i; j <= right; j += i){
                        arr[j] = false;
                    }
                }
            }
            for(int i = left; i <= right; i++){
                if(arr[i]){
                    count++;
                }
            }
            if(count < 2) return ans;
            for(int i = left; i <= right; i++){
                if(arr[i]){
                    diff = i - temp;
                    if(diff < Diff){
                        Diff = diff;
                        ans = {temp, i};
                    }
                    temp = i;
                }
            }
            return ans;
        }
    };