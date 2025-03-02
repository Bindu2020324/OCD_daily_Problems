#include<iostream>
using namespace std;
class Solution {
    public:
        bool isUgly(int n) {
            // for(int i=2;i<n;i++){
                // m1->wrong
                // if(n==5) continue;
                // else if(n%i==0){
                //     return false;
                // }
                // m2->wrong
                // if(i%2!=0 || i%3!=0 || i%5!=0){
                //     if(n%i==0){
                //         return false;
                //     }
                // }
            // }
            // return true;
    
                if(n<=0) return false;
                else{
                    while(n%2==0) n/=2;
                    while(n%3==0) n/=3;
                    while(n%5==0) n/=5;
                }
                return n==1;
            
        }
    };
int main(){
    int n=8;
    if(isUgly(n)) cout<<("yes");
    else cout<<("no");
    return 0;
}

// T.C.=O(Log n)
//     S.C.=O(1)
