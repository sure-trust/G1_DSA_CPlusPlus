#include<bits/stdc++.h>
using namespace std;
#define MAX_CHARS 256

class Solution
{
    public:
    bool areIsomorphic(string str1, string str2)
    {
        
         if(str1.length() != str2.length())
            return false;
            
        unordered_map<char,char> m1;
        unordered_map<char,char> m2;
        
        for(int i=0;i<str1.length();i++){
            m1[str1[i]] = str2[i];
            m2[str2[i]] = str1[i];
        }
        
        for(int i=0;i<str1.length();i++){
            if(m1[str1[i]]!=str2[i] || m2[str2[i]]!=str1[i])
                return false;
        }
        return true;
        
    }
};

int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
