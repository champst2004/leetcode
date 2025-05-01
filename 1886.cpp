// https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/description/

class Solution {
    public:
        bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
            for(int i = 0; i < 4; i++){
                if(mat == target) return true;
                rotate(mat);
            }
            return false;
        }
        void rotate(vector<vector<int>>& mat){
            int n = mat.size();
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    swap(mat[i][j], mat[j][i]);
                }
            }
            for(int j = 0; j < n; j++){
                int l = 0, r = n - 1;
                while(l < r){
                    swap(mat[j][l], mat[j][r]);
                    l++;
                    r--;
                }
            }
        }
    };