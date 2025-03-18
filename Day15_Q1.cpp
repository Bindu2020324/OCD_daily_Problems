Q1 gfg: K-th element of two merged Arrays    
TC=O( min(a.size(),b.size()) ) 
SC=O(1) 

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
    
    //  M1
    
        // TC=O(n), n is max of size of a and b-> accepted
        // tc=min(a.size(),b.size())
        //  THis method will works well only for smaller values of k
      
      
        int i=0,j=0;
        int idx=-1,ans=-1;
        while(idx<k-1 && i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                ans=a[i];
                i++; 
                idx++;
                // ans=a[i];
            }
            else{
                ans=b[j];
                j++;
                idx++;
                // ans=b[j];
            }
        }
        
        while(idx<k-1 && j<b.size()){
            ans=b[j];
            j++;
            idx++;
        } 
        
        while(idx<k-1 && i<a.size()){
            ans=a[i];
            i++; 
            idx++;
        }
        
     return ans;   

    
    // M2->  Binary search ; works better for larger values of k
    
    
    }
};
