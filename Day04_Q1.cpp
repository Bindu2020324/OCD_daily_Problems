// Question_1
// https://leetcode.com/problems/count-distinct-numbers-on-board/description/?envType=problem-list-v2&envId=math
// LT 2549

class Solution {
public:
    int distinctIntegers(int n) {
        // vector<int> temp;
        // temp.push_back(n);
        // // we want distnict numbers only**
        // for(int i=1;i<n;i++){
        //     if(n%i ==1){
        //         temp.push_back(i);
        //     }
        // }
        // for(int i=1;i<temp.size();i++){
        //     for(int j=1;j<=temp[i];j++){
        //         if(temp[i]%j ==1){
        //             temp.push_back(j);
        //         }
        //     }
        // }
        // // sort(temp);
        // for(int i=0;i<temp.size();i++){
        //     int count=0;
        //     for(int j=i+1;i<temp.size();j++){
        //         if(temp[i]==temp[j]){
        //             count++;
        //         }
        //     }
        //     if(count>=2){
        //         temp.erase(i);
        //     }
        // }
        // return temp.size();

        // OBSERVE THE RESULT->ANSWER IS ALWAYS N-1 
        if(n==1) return 1;
        else return n-1;
    }
};

// T.C.=O(1)
// S.C.=O(1)
