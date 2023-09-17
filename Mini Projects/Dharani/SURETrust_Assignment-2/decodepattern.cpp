
#include<bits/stdc++.h> 
using namespace std;



class Solution
{
  public:
    string lookandsay(int n) {
        // code here
         if(n==1) return "1";
       if(n==2) return "11";
       string s="11";
       for(int i=3;i<=n;i++)
       {
           string t="";
           s=s+'&';
           int count=1;
           for(int j=1;j<s.length();j++)
           {
               if(s[j]==s[j-1])
               {
                   count++;
               }
               else{
                   t=t+to_string(count);
                   t=t+s[j-1];
                   count=1;
               }
           }
           s=t;
       }
       return s;
    }   
};


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}