#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int n=S.size();
	    int l=0;
	    int r=n-1;
	    while(l<r)
	    {
	        if(S[l]!=S[r])
	        {
	            return 0;
	            
	        }
	        else{
	            r--;
	            l++;
	        }
	    }
	    return 1;
	}

};

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}