// Q1. Leetcode 2149
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

// Approach: make two arrays to store positive and negative no separetly, then store them in nums array again according to given conditions 
      // -> Dont make a new array to store ele form p and n.

        vector<int>p;
        vector<int>n;
        // vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0) p.push_back(nums[i]);
            else n.push_back(nums[i]);   
        }
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if((i%2 == 0) || i==0){
                // arr.push_back(p[a]);
                nums[i]=p[a];
                a++;
            }
            else{
                // arr.push_back(n[b]);
                nums[i]=n[b];
                b++;
            }
        }
        return nums;
    }
};

 // M1: T.C.=O(N), S.C.=O(N)
