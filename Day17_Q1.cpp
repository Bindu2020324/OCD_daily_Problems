Q1. leetcode 205  205. Isomorphic Strings

class Solution {
public:
    bool isIsomorphic(string s, string t) {

// along with count of characters their order also matters so this method will not work

        // vector<int> srr(127,0);
        // for(int i=0;i<s.size();i++){
        //     int idx=int(s[i]);
        //     srr[idx]++;
        // }
        // vector<int> trr(127,0);
        // for(int i=0;i<t.size();i++){
        //     int idx=int(t[i]);
        //     trr[idx]++;
        // }
        // if(srr==trr) return true;
        // else return false;



// **** WE HAVE TO MAP THE ELEMENTS ,this method will not work

        // if(s.size()==1) return true;
        // bool flag=false;
        // for(int i=0;i<s.size()-1;i++){
        //     if((s[i]==s[i+1] && t[i]==t[i+1]) ||  (s[i]!=s[i+1] && t[i]!=t[i+1]) ) flag=true;
        //     else if((s[i]==s[i+1] && t[i]!=t[i+1]) || (s[i]!=s[i+1] && t[i]==t[i+1])){
        //         flag=false;
        //         break;}
        // }
        
        // return flag;
        


TC=O(n),sc=o(1)

    vector<int>srr(256,0);
    vector<int> trr(256,0);
    for(int i=0;i<s.size();i++){
        if(srr[s[i]]==0 && trr[t[i]]==0){
            srr[s[i]]=t[i];
            trr[t[i]]=s[i];
        }
        else{
            if(srr[s[i]]!=t[i] || trr[t[i]]!=s[i]){
                return false;
            }
        }
    }
    return true;
    }
};
