#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dp[505][2005];

    int solve(int i,int rem,vector<int>&arr,int k){
        
        if(i==arr.size())
        return 0;
        
        if(dp[i][rem]!=-1)
        return dp[i][rem];
        
        
        
        if(rem>=arr[i]){
            int choice1=solve(i+1,rem-arr[i]-1,arr,k);
            int choice2=(rem+1)*(rem+1)+solve(i+1,k-arr[i]-1,arr,k);
            
            return dp[i][rem]=min(choice1,choice2);
        }
        
        
            
            return dp[i][rem]=(rem+1)*(rem+1)+solve(i+1,k-arr[i]-1,arr,k);
        
        
        
    }
    
    int solveWordWrap(vector<int>arr, int k) 
    { 
    
         memset(dp,-1,sizeof(dp));
         return solve(0,k,arr,k);
    } 
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}
