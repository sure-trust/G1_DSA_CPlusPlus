#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  unordered_map<string,int> mp;
  
  int solve(int ind,unordered_map<string,int> &mp,string &s)
  {
      if(ind>=s.length())
      return 1;
      string str="";
      
      for(int i=ind;i<s.size();i++)
      {
          
          
          str+=s[i];
         // cout<<str<<" ";
          if((mp.find(str)!=mp.end()) && solve(i+1,mp,s))
          return 1;
      }
      
      return 0;
  }
  
  
    int wordBreak(string A, vector<string> &B) {
        
        for(auto it:B)
        mp[it]++;
        
        return solve(0,mp,A);
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

