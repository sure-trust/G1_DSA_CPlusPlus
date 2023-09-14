#include<bits/stdc++.h>
using namespace std;

//Function to reverse the queue.
class Solution
{
    public:

     void sol(queue<int> & q){
        if(q.size()==0) return;
        int a=q.front();
        q.pop();
        sol(q);
        q.push(a);
    }
    queue<int> rev(queue<int> q)
    {
      
        sol(q);
        return q;
    }
};


int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
