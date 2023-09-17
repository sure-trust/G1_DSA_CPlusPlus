
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
          sort(A ,A+n);
        int sum=0;
	    int i=0;
	    for(int i=0;i<n;i++)
	    {
		    int j=i+1;
		    int k=n-1;
		    while(j<k)
		    {
		         sum=A[i]+A[j]+A[k];
		        if(sum > X)
		        {
		            k--;
		        }
		        else if(sum < X)
		        {
		            j++;
		        }
		        else if(sum == X)
		        {
		            return 1;
		        }
	        }
	    }
		return 0;
	
    }

};


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
