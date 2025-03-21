Q2  Leetcode  13  : Roman to integer
TC=O(n), sc=o(1)
// DONT FORGET TO UPDATE i IN EVERY CONDITIONAL STATEMENT
class Solution {
public:
    int val(char ch){
        if(ch=='M') return 1000;
        else if(ch=='D') return 500;
        else if(ch=='C') return 100;
        else if(ch=='L') return 50;
        else if(ch=='X') return 10;
        else if(ch=='V') return 5;
        else  return 1;
    }

    int romanToInt(string s) {
        int num=0;
        int i=0;
        while(i<s.size()){
            if(val(s[i])>=val(s[i+1]) && i!=s.size()-1){
                num+=val(s[i]);
                i++;
            }
            else if(val(s[i])<val(s[i+1]) && i!=s.size()-1 ){
                num+=(val(s[i+1])-val(s[i]));
                i+=2;
            }
            // else if(i==s.size()-1){
            else{
                num+=(val(s[i]));
                // dont forget to increment i here also
                i++;
            }
        }
        return num;
    }
};
