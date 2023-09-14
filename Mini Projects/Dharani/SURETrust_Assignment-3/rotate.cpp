#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};




class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {
     if(head==NULL || head->next==NULL || k==0)
        return head;
        
        int cnt=1;
        Node* tail=NULL;
        Node* temp=head;
        
        while(temp->next!=NULL)
        {
            if(cnt==k)
            tail=temp;
            temp=temp->next;
            cnt++;
        }
        
        if(k<cnt)
        {
            temp->next=head;
            head=tail->next;
            tail->next=NULL;
        }
        

   return head;
    }
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
