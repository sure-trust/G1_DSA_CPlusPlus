//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        int start=0;
	    int p=0;
	    for(int i=0;i<=str.length();i++)
	    {
		    if(str[p]==' ' || str[p]=='\0')
		    {
			    int end=p-1;
			    while(start<=end)
			    {
				    swap (str[start],str[end]);
				    start++;
				    end--;
			    }
			    start=p+1;
		    }
		    p++;
	    }
	    return str;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends