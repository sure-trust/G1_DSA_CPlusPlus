class Solution {
	public:
	   
		int LongestRepeatingSubsequence(string str){
		    // Code here
		     vector<vector<int>> dp(str.length(),vector<int> (str.length(),0));
		 
		     
		     for(int i=str.size()-1;i>=0;i--)
		     {
		         for(int j=str.size()-1;j>=0;j--)
		         {
		             if(i==j || str[i] != str[j])
		                dp[i][j] = max((i+1>=str.length() ? 0 : dp[i+1][j]),(j+1 >=str.length() ? 0 :dp[i][j+1]));
		             else
		                dp[i][j] = 1 + (i+1>=str.length() ? 0 : (j+1 >= str.length() ? 0 : dp[i+1][j+1]));
		         }
		     }
		     return dp[0][0];
		}

};

