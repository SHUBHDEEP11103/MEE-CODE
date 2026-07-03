// Last updated: 03/07/2026, 12:25:46
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int lo=0, hi = m*n-1;

        while(lo <= hi){

            int mid = (lo+hi)/2;
            int i = mid/n;
            int j = mid%n;

            if(matrix[i][j] == target){
                return true;
            }
            else if(matrix[i][j] > target){
                hi = mid-1;
            }
            else{
                lo = mid + 1;
            }
        }
        return false;
        
    }
};