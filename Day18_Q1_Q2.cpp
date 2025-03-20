Q1.  leetcode  242 
  tc=0(n)
// anagram->An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once.

class Solution {
public:
    bool isAnagram(string s, string t) {
        //TC=O(n)
        vector<int> srr(256,0);
        for(int i=0;i<s.size();i++){
            int idx=int(s[i]);
            srr[idx]++;
        }
        vector<int> trr(256,0);
        for(int i=0;i<t.size();i++){
            int idx=int(t[i]);
            trr[idx]++;
        }

        if(srr==trr) return true;
        else return false;

         M2  TC=O(nlogn)
      
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;

    }
};
