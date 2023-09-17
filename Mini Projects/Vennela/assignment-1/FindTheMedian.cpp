#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    sort(v.begin(),v.end());
		    int size=v.size();
		    int mid,x;
		    if(size%2==0){
		    mid=size/2;
		    x=(v[mid]+v[mid-1])/2;
		    }
		    else{
		    mid=(size)/2;
		    x=v[mid];
		    }
		  //  cout<<v[mid];
		  //int x=v[mid-1];
		  return x;
		}
};


int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(n);
    	for(int i = 0; i < n; i++)
    		cin>>v[i];
    	Solution ob;
    	int ans = ob.find_median(v);
    	cout << ans <<"\n";
    }
	return 0;
}

