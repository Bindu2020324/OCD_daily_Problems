// LT:1929. Concatenation of Array
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            arr.push_back(nums[i]);
        }
    return arr;
    }
};

// T.C.=O(n)
// S.C.=O(n)
