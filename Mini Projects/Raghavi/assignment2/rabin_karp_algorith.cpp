
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here.
            int m = txt.length();
            int n = pat.length();
            vector<int> ans;
            int j;
            for(int i = 0; i<=m-n; i++)
            {
                for(j = 0; j<n; j++)
                {
                    if(pat[j] != txt[i+j])
                    {
                        break;
                    }
                }
                if(j==n)
                {
                    ans.push_back(i+1);
                }
            }
            if (ans.empty())
            {
                return {-1};
            }
            return ans;
        }
     
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

