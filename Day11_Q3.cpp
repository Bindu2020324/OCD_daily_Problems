Q3 leetcode 54

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int m=matrix.size();
        int n=matrix[0].size();
        int minr=0,maxr=m-1,minc=0,maxc=n-1;
        int tno=m*n;
        int count=0;
        // loop runs till total elements inserted in v becomes equal to total no of elemets
        while(count<tno){
            // inserting min row
            for(int j=minc;j<=maxc && count<tno;j++){
                v.push_back(matrix[minr][j]);
                count++;
            }
            minr++;
            //inserting max column
            for(int i=minr;i<=maxr && count<tno;i++){
                v.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            // inserting max row
            for(int i=maxc;i>=minc && count<tno;i--){
                v.push_back(matrix[maxr][i]);
                count++;
            }
            maxr--;
            // inserting min column
            for(int i=maxr;i>=minr && count<tno;i--){
                v.push_back(matrix[i][minc]);
                count++;
            }
            minc++;

        }
    return v;

};

tc=o(n*m)
  sc=o(n*m)
