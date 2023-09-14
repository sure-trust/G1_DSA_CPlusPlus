#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
      bool match(char a, char b){
        
        if(a == '(' && b == ')' || a == '{' && b == '}' || a == '[' && b == ']'){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool ispar(string x)
    {
        // Your code here
         stack<char> st;
        for(int i=0; i<x.length(); i++){
            
            if(x[i] == '(' || x[i] == '{' || x[i] == '['){
                st.push(x[i]);
            }
            else{
                
                if(st.empty()){
                    return false;
                }
                else{
                    
                    if(match(st.top(),x[i])){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
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
