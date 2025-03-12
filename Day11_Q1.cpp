Q1.  leetcode 118

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // ERROR!!! must initialize arr before accessing indexes
        // vector<vector<int>> arr;
        // for(int i=0;i<numRows;i++){
        //     for(int j=0;j<i+1;j++){
        //         if(i==0 ||i==1|| j==0 || j==i) arr[i][j]=1;
        //         else{
        //         arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        //     }
        //     }
        // }
        // return arr;

        vector<vector<int>> arr(numRows); //resize the main vector
        for(int i=0;i<numRows;i++){
            // ***
            arr[i].resize(i+1,1); //resize each row and initialize it with 1
            for(int j=1;j<i;j++){
    // if conditions not required as we already initialize it
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
            }
        
        return arr;
    }
};

tc=o(n*n)=sc
