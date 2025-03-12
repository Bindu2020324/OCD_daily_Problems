// first take transpose then reverse the columns
Q1. leetcode 48
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // transpose of matrix
        // rows= matrix.size()
        // cols=matrix[0].size()
        int n=matrix.size();
        for(int i=0;i<n;i++){
            // for(int j=0;j<n;j++){
            //     if(i!=j && j>i){
            //         swap(matrix[i][j],matrix[j][i]);
            //     }
            // }

            for(int j=i+1;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
      
        for(int i=0;i<n;i++){
            int j=0;
            while(j<n/2 ){
                    // ** 
                    swap(matrix[i][j],matrix[i][n-j-1]);
                    j++;
            }
        }

    }
};

tc=o(n^n), s.c.=o(1)
