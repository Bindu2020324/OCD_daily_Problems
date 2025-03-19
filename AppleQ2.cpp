Q2.   leetcode 387. First Unique Character in a String

class Solution {
public:
    int firstUniqChar(string s) {
        
        // TIME LIMIT EXCEEDED

        // for(int i=0;i<s.size();i++){
        //     int count=0;
        //     for(int j=0;j<s.size();j++){
        //         if(j==i) continue;
        //         else if(s[i]==s[j]) count++;
        //     }
        //     if(count==0) return i;
        // }
        // return -1;


// CANT SORT BECAUSE DUE TO SORTING INDEX WILL CHANGES-> we cant find the FIRST unique character

        // sort(s.begin(),s.end());
        // for(int i=0;i<s.size();i++){
        //     int count=0,j=i+1;
        //     while(s[i]==s[j]){
        //         count++;
        //         j++;
        //     }
        //     if(count==0) {
        //         return i;
        //         break;
        //     }
        //     else{
        //         i=j;
        //     }
        // }
        // return -1;


  TC=O(N), SC=O(1)
APPROACH: make a frequency array to store freq of each char then for all char having freq=1 find their index and for first unique character find minimum of these index.
    
        vector<int> arr(26,0);
        for(int i=0;i<s.size();i++){
            int idx=int(s[i])-97;
            arr[idx]++;
        }
    
        int minIdx=s.size()+1;
        for(int i=0;i<26;i++){
            if(arr[i]==1){
                char ch=char(i+97);
                
                for(int j=0;j<s.size();j++){
                    if(s[j]==ch){
                        minIdx=min(minIdx,j);
                    }
                }
                // return minIdx;
            }
        }
        if(minIdx==s.size()+1) return -1;
        else{
            return minIdx;
        }
        
    }
};
