#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int countMin(string s){
        int n=s.size();
        string t=s;
        reverse(t.begin(),t.end());
        vector<vector<int>>ar(n+1,vector<int>(n+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1])ar[i][j]=1+ar[i-1][j-1];
                else ar[i][j]=max(ar[i-1][j],ar[i][j-1]);
            }
        }
        return n-ar[n][n];
 
    }
};

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}
