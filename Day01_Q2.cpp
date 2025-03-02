class Solution {
  public:
    // long long power(long long a,long long b){
    //     long long result=1;
    //     while(b>0){
    //         result*=a;
    //         b--;
    //     }
    //     return result;
    // }
    long long reversedBits(long long x) {
        // vector<int> v(32,0);
        // int i=0;
        // while(x>=1){
        //     if(x==1) v[i]=1;
        //     else{
        //     v[i]=x%2;
        //     x=x/2;
        //     i++;
        //     }
        // }
        // NO NEED TO USE CREATE NEW VECTOR
        
        long long sum=0;
        for(int j=0;j<32;j++){
            // sum+=v[j]*pow(2,31-j);
        // **USING LEFT SHIFT-->BECAUSE WE NEED POWER OF 2
            sum+=(x%2)<<(31-j);
            x/=2;
            
        }
        return sum;
        
        // time limit is exceeding due to repetative calling of power funcation**
    }
};

T.C.=O(1)
  S.C.=O(1)
