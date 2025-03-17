Q3 leetcode 1283

 TC=O(n*log(max(nums))), sc=O(1)

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
                 
        // THE DIVISOR CAN BE ANY NUMBER FROM 1 TO MAX(NUMS)
        // NOT NECCESSARY FOT THE DIVISOT TO BE AN ELEMENT OF NUMS

        // sort(nums.begin(),nums.end());
        // int st=0,end=nums.size()-1;
        // int ans=0;
        // while(st<=end){
        //     int mid=st+(end-st)/2;
        //     long sum=0; 
        //     for(int i=0;i<nums.size();i++){
        //         if(nums[i]%nums[mid] ==0){ sum+=(nums[i]/nums[mid]);
        //         }
        //         else { 
        //             sum+= ((nums[i]/nums[mid]) +1);
        //         }
        //     }
            
        //     if(sum<= threshold){
        //         // ans=max(ans,mid);
        //         ans=nums[mid];
        //         end=mid-1;
        //     }
        //     else{
        //         st=mid+1;
        //     }
        // }

        // return ans;



//  TC=O(n*log(max(nums))), sc=O(1)

        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];  //max element
        int st=1,end=n,ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            long sum=0; 
            for(int i=0;i<nums.size();i++){
                if(nums[i]%mid ==0){ sum+=(nums[i]/mid);
                }
                else { 
                    sum+= ((nums[i]/mid) +1);
                }
            }
            
            if(sum<= threshold){
                // ans=max(ans,mid);
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
