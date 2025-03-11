Q2   leetcode 121

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        // M1: TC=O(N^N)-> Time limit exceeds

        // int max=0;
        // for(int i=0;i<prices.size()-1;i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         // int profit=prices[j]-prices[i];
        //         if(max<(prices[j]-prices[i])){
        //             max=(prices[j]-prices[i]);
        //         }
        //     }
        // }
        // return max;

        // M2: TC=O(n)
        // **
        int buy=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else if(prices[i]-buy >profit){
                profit= prices[i]-buy;
            }
        }
        return profit;
    }
};
