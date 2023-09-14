#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        
       map<int,vector<int>>mp1,mp2;
       
       set<int>st;
       
       for(int i=0; i<2*e; i+=2)
       {
           st.insert(A[i]);
            mp1[A[i]].push_back(A[i+1]);
       }
       
       
       for(int i=0; i<2*e; i+=2)
       {
            mp2[B[i]].push_back(B[i+1]);
       }
       
        for(auto x : st)
        {
              
              vector<int>v1=mp1[x];
              vector<int>v2=mp2[x];
              
              
              reverse(v2.begin(),v2.end());
              
              
              if(v1!=v2)
              {
                  return false;
              }
        }
        
        
        return true;
        
        
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,e;
        
        cin>>n>>e;
        int A[2*e], B[2*e];
        
        for(int i=0; i<2*e; i++)
            cin>>A[i];
            
        for(int i=0; i<2*e; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.checkMirrorTree(n,e,A,B) << endl;
    }
    return 0;
}
