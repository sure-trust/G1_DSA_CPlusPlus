
#include<bits/stdc++.h>
using namespace std;



class Solution{
    public:
    
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
         long long int sum=0;
        long long int max=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum>max)
            {
                max=sum;
            }
            if(sum < 0)
            {
                sum=0;
            }
        }
        return max;
        
    }
};



int main()
{
    int t,n;
    
    cin>>t; 
    while(t--) 
    {
        
        cin>>n; 
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; 
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
