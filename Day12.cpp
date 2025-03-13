// Q1->Binary search  LC:704
// TC=O(logn)
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==nums[mid]){
                // ans= mid;
                return mid;
                break;
            }
            else if(target< nums[mid]){
                end=mid-1;
            }
            else if(target> nums[mid]){
                st=mid+1;
            }
        }
        // return ans;
        return -1;
    }
};


// Q2------> Finding first and last occurence of an ele in a sorted array......lC 34

// M1-> TC=O(logn)+n

// class Solution {
// public:
//     int fun(vector<int>&nums,int st,int end,int target){

//         // int ans=-1;
//         while(st<=end){
//             int mid=st+(end-st)/2;
//             if(target==nums[mid]){
//                 // ans= mid;
//                 return mid;
//                 break;
//             }
//             else if(target< nums[mid]){
//                 end=mid-1;
//             }
//             else if(target> nums[mid]){
//                 st=mid+1;
//             }
//         }
//         // return ans;
//         return -1;
//         }


//     vector<int> searchRange(vector<int>& nums, int target) {
//         vector<int> ans={-1,-1};
//         vector<int> ans1={0,0};
//         if(nums.size()==0) return ans;
//         else if(nums.size()==1){
//             if(target==nums[0]){
//                 return ans1;
//             }
//              else{
//                 return ans;
//              }
//         }
//         else{
//         int st=0,end=nums.size()-1;
//         // int tar=target;
//         // vector<int> ans={-1,-1};
//         int mid = fun(nums,0,nums.size()-1,target);
//         if(mid==-1){ 
//             return ans;
//         }
//         else{
//         int fidx=mid;
//         int lidx=mid;
//         // int i=1;
//         // while(nums[mid-i]==nums[mid]){
//         //     fidx=mid-i;
//         //     i++;
//         // } 
//         while(fidx>0 && nums[fidx-1]==target){
//             fidx--;
          
//         } 
//         // int j=1;
//         // while(nums[mid+j]==nums[mid] ){
//         //     lidx=mid+j;
//         //     j++;
//         // }
//         while(lidx<nums.size()-1 && nums[lidx+1]==target){
//             lidx++;
//         } 
//         ans[0]=fidx;
//         ans[1]=lidx;
//         return ans;
//         }
//         }
//     }
// };


// M2->TC=(logn)

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        vector<int>ans={-1,-1};
        if(nums.size()==0) return ans;

        // first index
        while(st<=end){
            int mid=st+(end -st)/2;
            if(nums[mid]==target){
                if(mid==0 || nums[mid-1]!=target){
                    ans[0]=mid;
                    break;
                }
                else{
                    end=mid-1;
                }
            }
            
            else if(nums[mid]<target) st=mid+1;

            else end=mid-1;
        }

    // last index
        st=0,end=nums.size()-1;
        while(st<=end){
            int mid=st+(end -st)/2;
            if(nums[mid]==target){
                if(mid==(nums.size()-1) || nums[mid+1]!=target){
                    ans[1]=mid;
                    break;
                }
                else{
                    st=mid+1;
                }
            }
            
            else if(nums[mid]<target) st=mid+1;
            
            else end=mid-1;
        }
return ans;
   }
};
