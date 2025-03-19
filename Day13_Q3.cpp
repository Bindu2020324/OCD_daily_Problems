Q3  Leetcode  33
TC=O(logn), SC=O(1)

// Approach1:  first find the pivot element i.e.minimum ele then do Binary Search on both side of that pivot element
// Approch2:  Tdentify the sorted portion and the portion to be eliminate 

class Solution {
public:
// M1
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
    
    

    // int search(vector<int>& nums, int target) {
      
        // // finding pivot element
        // int st=0,end=nums.size()-1;
        // int pivot=0;
        // if(nums[0]<nums[nums.size()-1]) pivot=0;
        // else if(nums.size()==1) pivot=0;
        // else{
        // while(st<=end){
        //     int mid=st+(end-st)/2;
        //     if(st==end && nums[mid]<nums[pivot]) {
        //         pivot=st;
        //         break; 
        //         }
        //     else if(nums[mid]>nums[nums.size()-1]){
        //         st=mid+1;
        //     }
        //     else if(nums[mid]<nums[nums.size()-1]){
        //         pivot=mid;
        //         end=mid-1;
        //     }
        
        //  } 
        // }
        // st=0,end=nums.size()-1;
        // if(BinarySearch(nums,target,st,pivot-1) == BinarySearch(nums,target,pivot+1,end)) return -1;
        // return max(BinarySearch(nums,target,st,pivot-1),BinarySearch(nums,target,pivot,end));




// M2
    int search(vector<int>& nums, int target) {
    int st=0,end=nums.size()-1;
    // not rotated array
    if(nums[0]<nums[nums.size()-1]) return BinarySearch(nums,target,st,end);
    // rotated array
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        // not working well-> NO need to apply BS again and again in sorted portion

//         else {
//             // check left is sorted or not
//             if(isSort(nums,st,mid)){
//                 if(nums[st]<=target<=nums[mid]){
//                     return BinarySearch(nums,target,st,mid);
//                 }
//                 else{
//                     // eliminates left
//                     st=mid+1;
//                 }
//             }

//             else{
//                 if(nums[mid]<=target<=nums[end]){
//                     return BinarySearch(nums,target,st,mid);
//                 }
//                 else{
//                     // eliminates left
//                     end=mid-1;
//                 }
//             }
//         }
//     }
// return -1;

    // LEFT SORTED
    if(nums[st]<=nums[mid]){
        if(nums[st]<=target && target<=nums[mid]){ //target found in left portion
            end=mid-1; //eliminates right portion
        }
        else{
            st=mid+1;  //otherwise eliminates left
        }
    }

    // RIGHT SORTED
    else{
        if(nums[mid]<=target && target<=nums[end]){  //target found in right portion
            st=mid+1;  //eliminates left
        }   
        else{
            end=mid-1 ; //otherwise eliminates right
        }
    } 
    }
    return -1;
    }
};

