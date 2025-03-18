Q2  leetcode  875

tc=O(N∗Log(Max (pile))

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        if(h==piles.size()) return piles[piles.size()-1];
        long end=piles[piles.size()-1];
        long st=1,ans=0;
        while(st<=end){
            long mid=st+(end-st)/2;
            long time=0;
            for(int i=0;i<piles.size();i++){
                if(piles[i]<=mid) time++;
                else{
                    if(piles[i]%mid ==0) time+=(piles[i]/mid);
                    else{
                        time+=(piles[i]/mid)+1;
                    }
                }
            }
            if(time<=h){
                ans=mid;
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }

};
