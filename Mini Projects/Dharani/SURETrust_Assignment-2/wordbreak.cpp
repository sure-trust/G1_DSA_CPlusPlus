
#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
     bool static compare(string a, string b)
    {
        return a.size()>b.size();
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
         sort(B.begin(), B.end(), compare);
        
        
        int i=0; 
        int n=B.size();
        int index;
        
        
        while(i<n && A.size()>0)
        {
            while( (index=A.find(B[i]) ) !=string::npos )
            {
                A.replace(index, B[i].size(), "");
            }
            i++;
        }
        
        
        if(A.size()==0) return 1;
        return 0;
    
    }
};


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
