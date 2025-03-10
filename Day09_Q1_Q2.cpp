//Q1: Two sum-> leetcode 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // T.C=O(N^N),S.C.=O(N)
        // vector<int>ans;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             break;
        //         }
        //     }
        // }
        // return ans;

// ** T.C=O(N^N), S.C.=O(1)

// WE CAN RETURN MULTIPLE VALUES WITHOUT STORING THEM IN A NEW VECTOT-> USE {} AND STORE ALL VALUES TO BE RETURN 

        vector<int>ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                    break;
                }
            }
        }
        return {};

    }
};



// Q2: sort color -> leetcode: 75

class Solution {
public:
    void sortColors(vector<int>& nums) {

        // T.C.=O(N), S.C=O(1) mine
// Approach: count frequency of 0,1 and 2 then nums ke elements change kr diye intial wale 0 then 1 and then 2, index count se decide krenge
      
        // int one=0,zero=0,two=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0) zero++;
        //     else if(nums[i]==1) one++;
        //     else if(nums[i]==2) two++;
        // }

        // for(int i=0;i<zero;i++){
        //     nums[i]=0;
        // }
        // for(int i=zero;i<one+zero;i++){
        //     nums[i]=1;
        // }
        // for(int i=one+zero;i<two+one+zero;i++){
        //     nums[i]=2;
        // }



        // M2-> t.c=o(n), s.c.:o(1)
        // ***
      approach: using three pointers
      
        int st=0,mid=0,end=nums.size()-1;
        while(mid<=end){
            if(nums[mid]==0){
                 swap(nums[st],nums[mid]);
                 st++;
                 mid++;
            }
            else if(nums[mid]==1) mid++;
            else {
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
};


