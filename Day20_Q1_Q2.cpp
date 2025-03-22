Q2--> leetcode  8 string to integer
TC=O(n)

class Solution {
public:
    int myAtoi(string s) {
    //  Not handle cases where int is out of range of int
        // char ch='+';
        // string sub;
        // int num=0;
        // for(int i=0;i<s.size();i++){
        //     if(s[i]==' ' || s[i]==0) continue;
        //     // else if(s[i]=='-') ch='-';
        //     else if(s[i]=='+'||s[i]=='-'){
        //         if(ch=='+') ch=s[i]; //set sign only if it's not already set
        //         else break; //if sign is repeated,break the loop
        //     }
        //     // else if(s[i]>=0 && s[i]<=9){  //S[I] IS A CHAR NOT INT CANT COMPARE LIKE THIS***
        //         else if(s[i]>='0' && s[i]<='9'){        
        //             int j=i;
        //             while(j<s.size() && s[j]>='0' && s[j]<='9'){
        //                 j++;
        //             }
        //             sub=s.substr(i,j-i);
        //             num=stoi(sub);
        //             break;
        //     }
        //     else{
        //         // continue;
        //         // intially hi dusra char aa gya to 0 hi return krna hai
        //         break; //invalid char found,stop traversing
        //     }
        // }
        // // if(num==0) return 0;
        // // else if(ch=='+') return num;
        // // else return (ch+num);  **adding a char to an int results in an 
        // // ASCII-based incorrect calculation. their ascii values get added

        // return (ch=='-'? -num: num);

        int i=0,n=s.size();
        while(i<n && s[i]==' ') i++; 

        int sign=1;
        if(i<n && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-') sign = -1;
            i++;
        }

        long num=0;
        while(i<n && s[i]>='0' && s[i]<='9'){
            num=num*10 +(s[i]-'0');

            if(num*sign >INT_MAX) return INT_MAX;
            if(num*sign <INT_MIN) return INT_MIN;
            i++;
        }
        return num*sign;
        }
};
