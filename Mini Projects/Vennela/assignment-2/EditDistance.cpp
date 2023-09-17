#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int editDistance(string s, string t) {
      
        int m=s.length();
        int n=t.length();
        
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=m;i>=0;i--){
            for(int j=n;j>=0;j--){
                if(i==m and j==n)
                dp[i][j]=0;
                
                else if(i==m)
                dp[i][j]=n-j;
                
                else if(j==n)
                dp[i][j]=m-i;
                
                else if(s[i]==t[j])
                dp[i][j]=dp[i+1][j+1];
                
                else if(s[i]!=t[j]){
                    
                    dp[i][j]=1+min({dp[i][j+1],dp[i+1][j],dp[i+1][j+1]});
            }
        }
    }
    return dp[0][0];
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

