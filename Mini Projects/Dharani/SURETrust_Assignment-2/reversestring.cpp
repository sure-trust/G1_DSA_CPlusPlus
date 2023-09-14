
#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
       int length = str.length();
        string reverse;
        for(int i = length-1; i>=0 ;i--){
            reverse += str[i];
        }
        return reverse;   
    }
};


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}