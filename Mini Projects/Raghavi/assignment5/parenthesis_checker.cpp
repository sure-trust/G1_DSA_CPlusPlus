#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int n=x.length();
        if(n%2!=0) return false;
        stack<char>s;
        for(int i=0;i<x.length();i++){
            if(x[i]=='(' || x[i]=='{'|| x[i]=='['){
                s.push(x[i]);
            }
            else{
            
               if( s.size()==0) {
                   return false;
               }
               else {
                  char ch=s.top();
                  if(x[i]=='}' && ch!='{'){
                      return false;
                  }
                  else if (x[i]==']' && ch!='['){
                      return false;
                  }
                  else if(x[i]==')' && ch!='('){
                      return false;
                  }
               }
                  s.pop();
               
            }
        }
        if(s.size()==0) return true;
        else return false;
    }

};

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
