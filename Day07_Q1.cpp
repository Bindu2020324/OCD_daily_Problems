
// Q1: Can place flowers: leetcode 605
// T.C.=O(n) , S.C.=O(1)

// Approach: check previous and next position and if all conditions fullfills place 1 at that index and also consider whether the position is first or last

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) &&      (i==flowerbed.size()-1 || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                count++;
            }
            if(count>=n) return true;
        }
        return count>=n;
    }
};

