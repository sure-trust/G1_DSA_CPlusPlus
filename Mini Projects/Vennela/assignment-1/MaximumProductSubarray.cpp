#include <bits/stdc++.h>
using namespace std;

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	   long long minValue, maxValue, maxProd;
	    minValue = maxValue = maxProd = arr[0];
	    
	    for(int i=1; i<n; i++){
	        if(arr[i] < 0){
	            swap(minValue,maxValue);
	        }
	        
	        minValue = min((long long)arr[i], arr[i]*minValue);
	        maxValue = max((long long)arr[i], arr[i]*maxValue);
	        maxProd = max(maxProd, maxValue);
	    }
	    
	    return maxProd;
	}
	
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
