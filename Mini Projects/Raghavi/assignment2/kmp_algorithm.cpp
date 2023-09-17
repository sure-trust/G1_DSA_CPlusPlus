
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:		
	int lps(string s)
	{
	    // Your code goes here
	      int n=s.size();
	  vector<int>ps(n,0);
	  int i=1,j=0;
	  while(i<n)
	  {
	      if(s[i]==s[j])
	      {
	          ps[i]=j+1;
	          i++;
	          j++;
	      }
	      else{
	          if(j!=0)
	          {
	              j=ps[j-1];
	          }
	          else
	          {
	              i++;
	          }
	      }
	  }
	  return ps[n-1];
	
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
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
}

