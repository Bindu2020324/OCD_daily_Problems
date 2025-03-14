Q3  Leetcode  33
TC=O(logn), SC=O(1)

// Approach:  first find the pivot element i.e.minimum ele then do Binary Search on both side of that pivot element
  
class Solution {
public:
    int BinarySearch(vector<int>& nums, int target,int st,int end){
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                    return mid;
                    break; 
                }
            else if(nums[mid]<target){
                    st=mid+1;
                    }
            else{
                    end=mid-1;
            }
        }
        return -1;
        }
    

    int search(vector<int>& nums, int target) {
        // finding pivot element
        int st=0,end=nums.size()-1;
        int pivot=0;
        if(nums[0]<nums[nums.size()-1]) pivot=0;
        else if(nums.size()==1) pivot=0;
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
        st=0,end=nums.size()-1;
        // if(BinarySearch(nums,target,st,pivot-1) == BinarySearch(nums,target,pivot+1,end)) return -1;
        return max(BinarySearch(nums,target,st,pivot-1),BinarySearch(nums,target,pivot,end));

    }
};
