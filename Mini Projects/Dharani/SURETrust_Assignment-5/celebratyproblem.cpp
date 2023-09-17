#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
 
    int celebrity(vector<vector<int> >& M, int n) 
    {
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(M[i][j]==0)
                {
                    cnt++;
                }
            }
            if(cnt==n)
            {
                for(int j=0;j<n;j++)
                {
                    if(M[j][i]==1)
                    {
                        cnt--;
                    }
                }
                if(cnt==1)
                return(i);
            }
        }
        return(-1);
    }
};


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}
