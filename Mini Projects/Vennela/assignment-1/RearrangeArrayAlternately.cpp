// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
        //  sort(arr,arr+n);
    	int flag=1;
    	vector<long long>arr1(n);
    	int i=0;
    	int j=n-1;
    	int k=0;
    	while(i<=j){
    	    if(flag){
    	        arr1[k]=arr[j];
    	        k++;
    	        j--;
    	        flag=0;
    	    }
    	    else{
    	        arr1[k]=arr[i];
    	        k++;
    	        i++;
    	        flag=1;
    	    }
    	    
    	}
    	for(int i=0;i<n;i++){
    	    arr[i]=arr1[i];
    	}
    	 
    }
};


// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 

