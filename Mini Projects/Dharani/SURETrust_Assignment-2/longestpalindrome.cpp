
#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string longestPalin (string S) {
        // code here
         string ans="";
        int max_length=INT_MIN;
        int n=S.size();
        for(int i=0; i<n ; i++)
        {
            int start=i;
            int end=i;
            
            while(start>=0 && end<n)
            {
                if(S[start] != S[end])
                 break;
                 if(end-start+1>max_length)
                 {
                     max_length=end-start+1;
                     ans=S.substr(start,end-start+1);
                 }
                 start--;
                 end++;
                
            }
        }
        for(int i=0; i<n;i++)
        {
            if(S[i]==S[i+1])
            {
               int start=i;
               int end=i+1;
                while(start>=0 && end<n)
                {
                    if(S[start] != S[end])
                 break;
                 if(end-start+1>max_length)
                 {
                     max_length=end-start+1;
                     ans=S.substr(start,end-start+1);
                 }
                 start--;
                 end++;
                }
            }
        }
        return ans;
    }
};


int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
