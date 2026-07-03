// Last updated: 03/07/2026, 12:25:48
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>> temp(matrix);
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(temp[i][j]==0){
                    for(int k=0; k<col; k++){
                        matrix[i][k]=0;
                    }
                    for(int m=0; m<row; m++){
                        matrix[m][j]=0;
                    }
                }
            }
        }
    }
};