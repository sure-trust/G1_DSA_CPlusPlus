
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    string reverseWord(string str)
    {
        int start = 0;
        int end = str.length() - 1;

        while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    return str;
    }
    
    int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string reversed = reverseWord(input);
    cout << "Reversed string: " << reversed << std::endl;

    return 0;
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

