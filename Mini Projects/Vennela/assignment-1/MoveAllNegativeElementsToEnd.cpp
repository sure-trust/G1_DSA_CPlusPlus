#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        int v[n];
        int i=0;
        int j=0;
        while(i<n){
            if(arr[i]>0){
                v[j]=arr[i];
                j++;
            }
            i++;
        }
        int k=0;
        while(k<n){
            if(arr[k]<0){
                v[j]=arr[k];
                j++;
            }
            k++;
        }
        
        for(int i=0;i<n;i++){
            arr[i]=v[i];
        }
    }
    
};


int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

