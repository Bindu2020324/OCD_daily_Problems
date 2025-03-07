// Leetcode  2591

class Solution {
public:
    int distMoney(int money, int children) {
        // M1 -> T.C=O(N),S.C.=O(N)

        // // if(money<8) return 0;
        // if(children>money || money<0) return -1;
        // if(money<8) return 0;
        // vector<int>arr(children,0);
       
        //     for(int i=0;i<children;i++){
        //         arr[i]=1;
        //         money--;
        //     } 
        //     int pt=0;
        //     for(int i=0;i<children;i++){
        //         money=money-7;
        //         if(money>=0){
        //             arr[i]+=7;
        //             pt++;
        //         }
        //         else{
        //             arr[i]+=(money+7);
        //             if(arr[i]==4 && pt>0 && i==children-1){
        //                 pt--;
        //             }
        //             break;
        //         }
        //     }
        //     if(money>0){
        //         arr[children-1]+=money;
        //         pt--;
        //         if(arr[children-1]==4 && pt>0) {
        //             pt--;
        //         }
        //     }
        //     return pt; 
        //     // else return -1;


      
        // M2-to be solve
      
        // money=money-children;
        // int ct7= money/7;
        // int rem_sp=money%7;
        // money/=7;
        // if(rem_sp==1 && money==3 ){
        //     max(0,ct7-1);
        // }
        // return ct7;



      
        // M3--> T.C.=O(N) , S.C.=O(1)
      
        if(money<children) return -1;
        money=money-children; 
        int ans=0;
        while(money>=7 && ans<children){
            money-=7;
            ans++;
        }

        if((money>0 && ans==children) ||(money==3 && (children-ans)==1)){
            ans--;
        }
        return ans;
    }
};
