#include <bits/stdc++.h> 
using namespace std; 

class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
       string temp="";
       temp+=S[0];
       for(int i=1;i<S.size();i++)
       {
           if(S[i]!=S[i-1])
           {
               temp+=S[i];
           }
       }
       return temp;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 




