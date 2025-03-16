Q1  GFG: Square root
TC=O(logn),sc=o(1)

class Solution {
  public:
    int floorSqrt(int n) {
        if(n==0 || n==1) return n;
        else{
        int ans=-1;
        int st=0,end=n;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(mid<=n/mid){
                ans=mid;
                st=mid+1;
            }
            else{
                end=mid-1;
            }
            
        }
        return ans; 
            
        }
    }
};
