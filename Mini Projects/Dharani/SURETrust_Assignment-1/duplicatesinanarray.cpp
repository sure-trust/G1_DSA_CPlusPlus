
#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
         vector<int> ans;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
            a[arr[i]]++;
            if(a[arr[i]] == 2)
                ans.push_back(arr[i]);
        }
        if(ans.size() == 0)
            ans.push_back(-1);
        sort(ans.begin(),ans.end());
        return ans;
    }
};



int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

