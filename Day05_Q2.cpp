// leetcode  409
class Solution {
public:
    int longestPalindrome(string s) {

        // // M1-> T.C.=O(nlogn),S.C=O(1) :Mine
        // if(s.length()==0) return 0;
        // // **dont forget tos sort the string first
        // sort(s.begin(),s.end());
        // int ans=0,odd=0;
        // // applicable only for sorted string->make sure to first sort the string
        // for(int i=0;i<s.length();i++){
        //     int count=0;
        //     for(int j=i+1;j<s.length();j++){
        //         if(s[i]==s[j]){ count++;
        //         i=j;
        //         }
        //         else{break;} //->ONLY USE IF STRING IS SORTED
        //     }
            
        //     if((count+1)%2==0) ans+=(count+1);
        //     else{
        //         ans=ans+count;
        //         odd++;
        //     }
        // }

        // if(odd>0) return ans+1;
        // else return ans;


        // M2->T.C.=O(Nlogn),S.C.=O(1)
         if(s.size()==1)
      {
        return 1;
      }
      sort(s.begin(),s.end());
      int count1=1;
      int count=0;
      for(int i=0;i<s.size();i++)
      {
        if(s[i]==s[i+1])
        {
            count1++;
        }
        else{
            if(count1%2==1)
            {
                count1--;
            }
            count+=count1;
            count1=1;
        }
      }
      if(count==s.size())
      return count;
      return count+1;  
    }
};

Time complexity explaination

Sorting the string (sort(s.begin(), s.end())):

1.Sorting takes O(n log n) time, where n is the length of the string.
2.Outer loop (for(int i=0; i<s.length(); i++)):

.The loop runs O(n) times.
3.Inner loop (for(int j=i+1; j<s.length(); j++)):

This loop runs only when consecutive characters are the same.
Since each character is visited at most once, the total number of iterations across all j loops is O(n).
Final Time Complexity:
Sorting takes O(n log n)
The two loops together take O(n)
The dominant term is O(n log n) (due to sorting), so the overall time complexity is:
𝑂(𝑛log𝑛)
