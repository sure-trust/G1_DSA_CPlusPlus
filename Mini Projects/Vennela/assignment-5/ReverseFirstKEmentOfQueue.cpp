#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}

queue<int> modifyQueue(queue<int> q, int k) {
   
   stack<int>s;
   int n=q.size();
   int i=k;
   while(i--){
       int ele=q.front();
       s.push(ele);
       q.pop();
   
   }
   
   i=k;
   while(i--){
       int ele=s.top();
       q.push(ele);
       s.pop();
   }
   
   i=n-k;
   vector<int>a;
   while(i--){
       int ele=q.front();
       a.push_back(ele);
       q.pop();
   }
   
   for(int i=0;i<a.size();i++){
       q.push(a[i]);
   }
   return q;
}