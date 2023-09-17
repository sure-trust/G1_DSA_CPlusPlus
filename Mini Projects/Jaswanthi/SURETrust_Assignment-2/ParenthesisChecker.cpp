#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool ispar(string x)
    {
        stack<char> sc;
        for(int i=0;i<x.length();++i){
            if(x[i] == '(' || x[i] == '{' || x[i] == '['){
                sc.push(x[i]);
            }
            else if(x[i]==')'){
                if(sc.size()>0 &&sc.top()== '('){
                    sc.pop();
                }
                else{
                    return false;
                }
            }
             else if(x[i] == '}'){
                if(sc.size() > 0 &&sc.top() == '{'){
                    sc.pop();
                }
                else{
                    return false;
                }
            }
             else if(x[i] == ']'){
                if(sc.size() > 0 && sc.top() == '['){
                    sc.pop();
                }
                else{
                    return false;
                }
            }
    }
    if(sc.size()>0){
        return false;
    }
    return true;

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
