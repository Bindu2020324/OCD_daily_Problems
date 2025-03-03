class Solution {
  public:
    int isvow(char ch){
        if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' ){
            return 1;
        }
        else{
            return 0;
        }
    }
    int isGoodorBad(string S) {
        int n=S.length();
        // '?' CONSONANT OR VOWELS KE BEECH BHI HO SKTE HAI..SO DONT FORGET TO CONSIDER THIS CASE***
        int countv=0,countc=0;
        for(int i=0;i<n;i++){
            // if(countv>5 || countc>3){
            //     return 0;
            // }
            if(S[i]=='?'){
                countv++;
                countc++;
            }
            else if(isvow(S[i])){
                countc=0;
                countv++;
            }
            else{
                countv=0;
                countc++;
                }
            if(countv>5 || countc>3){
                return 0;
            }
            }
        return 1;    
    }
};

T.C.=O(n);
S.C.=O(1);
