Q2 leetcode-> 153
TC=O(Logn),SC=O(1)

// Approach:  finding pivot element from where array is rotated or which is the minimum and first ele of non sorted array.
//   Finding using Binary Search, if mid ele is > than last ele then pivot must on right side of pivot, and if mid ele is < than last ele then pivot must be
// either that ele's index or on left of that elemnt.
  
class Solution {
public:
    int findMin(vector<int>& nums) {
        // int ans=0,st=0,end=nums.size()-1;
        // // not rotated
        // if(nums[0]<nums[nums.size()-1]) return nums[0];
        // else if(nums.size()==1) return nums[0];
        // // rotated
        // else{
        //     while(st<=end){
        //     int mid=st+(end-st)/2;
        //     if(mid!=nums.size()-1){
        //         if(nums[mid+1]<nums[mid]){
        //             ans=mid+1;
        //             break; 
        //         }
        //         else if(nums[mid+1]>nums[mid]){
        //             if(nums[mid-1]<nums[mid]){
        //             st=mid+1;
        //             }
        //         }
        //     }

        //     }
        // }
        // return nums[ans];
        
        int st=0,end=nums.size()-1;
        int pivot=0;
        if(nums[0]<nums[nums.size()-1]) return nums[0];
        else if(nums.size()==1) return nums[0];
        else{
        while(st<=end){
            int mid=st+(end-st)/2;
            if(st==end && nums[mid]<nums[pivot]) {
                pivot=st;
                break; 
                }
            else if(nums[mid]>nums[nums.size()-1]){
                st=mid+1;
            }
            else if(nums[mid]<nums[nums.size()-1]){
                pivot=mid;
                end=mid-1;
            }
        
        } 
        }
        return nums[pivot];
    }
};
