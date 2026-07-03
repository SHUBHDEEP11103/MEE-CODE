// Last updated: 03/07/2026, 12:22:41
class Solution {
public:
    // Main function
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                // Example usage of helper function
                if(!checkShift(mat[i], k)) return false;
            }
        }
        return true;
    }

private:
    // Helper function
    bool checkShift(vector<int>& row, int k) {
        int n = row.size();
        vector<int> shifted(n);
        
        // Perform cyclic shift by k
        for(int i=0; i<n; i++){
            shifted[(i+k)%n] = row[i];
        }
        
        // Compare with original row (or some condition)
        return shifted == row;  // Example condition
    }
};
