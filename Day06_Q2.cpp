// GFG : stock span problem

class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
       
        
        // M1-> T.C.=O(N^N) ,S.C.=O(N)
// TIME LIMIT EXCEEDS
//      vector<int>brr;
        // for(int i=0;i<arr.size();i++){
        //     int count=0,j= i;
        //     while(arr[j]<=arr[i] && j>=0){
        //         count++;
        //         j--;
                
        //     }
        //     brr.push_back(count);
           
        // }   
        // return brr;
         
         
        // m2-->WRONG
        
        // vector<int>brr(arr.size(),0);
        // int i=0,j=0,count=0;
        // while(i<arr.size() && j>=-1){
        //     j=i;
        //     if(arr[j]<=arr[i]){
        //       j--;
        //       count++;
        //       brr[i]=count;
        //     } 
        //     // brr[i]=count;
        //     else{
        //         i++; 
        //         count=0;
        //     }
        // }
        // return brr;
        
        
        // M3--> T.C.=O(N) ,S.C.=O(N)
        // vector<int>brr(arr.size(),1);
        // for(int i=0;i<arr.size();i++){
        //     count=0;
        //     int j=i-1;
        //     while(j>=0 && arr[j]<=arr[i]){
        //         count+= brr[j];
        //         j-=brr[j];
        //     }
        //     brr[i]=i-j;
            
            
        //     while (j >= 0 && arr[j] <= arr[i]) {
        //     count += ans[j];  
        //     j -= ans[j];      
        // }

        // ans[i] = count;
        // }
        //     }
        // return brr;
        
        // or
        
        vector<int>brr(arr.size());
        brr[0]=1;
        int count;
        for(int i=0;i<arr.size();i++){
            count=1; 
            int j=i-1;
            while(j>=0 && arr[j] <= arr[i]){
                count+= brr[j];
                j-=brr[j];
            }
            brr[i]=count;
            
        }
        return brr;
    }
};
