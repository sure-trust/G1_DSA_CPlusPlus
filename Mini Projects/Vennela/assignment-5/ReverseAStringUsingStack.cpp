#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}

char* reverse(char *S, int len)
{
   stack<int>st;
   for(int i=0;i<len;i++){
       st.push(S[i]);
   }
   int i=0;
   while(!st.empty()){
       S[i++]=st.top();
       st.pop();
   }
   return  S;
}