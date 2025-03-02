// # Day00_Q2.cpp
LT:217. Contains Duplicate
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return flag;
    }
};

T.C.=O(n)
  S.C.=O(1)
