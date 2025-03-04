class Solution {
public:
    // void invert(vector<int>&v){
    //     for(int i=0;i<v.size();i++){
    //         if(v[i]==0){
    //             v[i]=1;
    //         }
    //         else{
    //             v[i]=0;
    //         }
    //     }
    //     return;
    // }
    // void flip(vector<int>&v){
    //     int i=0;
    //     int j=v.size()-1;
    //     while(i<j){
    //         int temp=v[i];
    //         v[i]=v[j];
    //         v[j]=temp;
    //         i++;
    //         j--;
    //     }
    //     return ;
    // }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        // for(int i=0;i<image.size();i++){
        //     flip(image[i]);
        //     invert(image[i]);
        // }

        // M2:SAME APPROACH WITHOUR USIGN FUNCATIONS
        
        int n=image.size();
        for(int i=0;i<n;i++){
        for(int j=0;j<(n+1)/2;j++){
            swap(image[i][j],image[i][n-j-1]);
            image[i][j]=1-image[i][j];
            if(j!=n-j-1) image[i][n-j-1]=1-image[i][n-j-1];
        }
        }
        return image;
    }
};

// T.C.O(N*N);
// S.C.=O(1)
