//User function template for C++

class Solution{
  public:		
	int lps(string s) {
	    int n=s.size();
	  vector<int>ps(n,0);
	  int i=1,j=0;
	  while(i<n){
	      if(s[i]==s[j]){
	          ps[i]=j+1;
	          i++;
	          j++;
	      }
	      else{
	          if(j!=0){
	              j=ps[j-1];
	          }
	          else{
	              i++;
	          }
	      }
	  }
	  return ps[n-1];
	}
};

