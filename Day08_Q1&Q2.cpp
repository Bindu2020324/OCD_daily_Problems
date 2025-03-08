// Q1  leetcode 283--> move all zeroes at the end

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
// M1
        // T.C.=O(N^N)
        // int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0) count++;
        // }
        // for(int j=0;j<count;j++){
        //     for(int i=0;i<nums.size()-j-1;i++){
        //         if(nums[i]==0) swap(nums[i],nums[i+1]);
        //     }
        // }

// M2--> using two pointer approach, ptr j for non-zero elements and i traversing the whole array
      
    // T.C=O(N)
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }
    }
};

// Q2  Rotate an array k times-> Leetcode 189

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // -> gives undefinedBehaviorSanitizer  Error!!
        // int i=0,j=nums.size()-1,m=k;
        // while(m>0){
        //     swap(nums[i],nums[j]);
        //     i++;
        //     j--;
        //     m--;
        // }
        // reverse(nums.begin(),nums.begin() +k);
        // reverse(nums.begin() +k,nums.end());

    int n=nums.size();
    // to reduce steps    
    k=k%n;
    reverse(nums.begin(),nums.end());        
    reverse(nums.begin(),nums.begin()+(k));
    reverse(nums.begin()+(k),nums.end());  
    }
};

// T.c.=O(n),s.c.=o(1)
