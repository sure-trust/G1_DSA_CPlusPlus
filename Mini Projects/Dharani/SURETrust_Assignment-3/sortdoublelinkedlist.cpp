#include <bits/stdc++.h>
using namespace std;

class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;
    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};



class Solution
{
public:
   
    DLLNode *sortAKSortedDLL(DLLNode *head, int k)
    {
        if(k==0)
        {
            return head;
        }
        vector<int> arr;
        DLLNode* temp=head;
        while(temp!=NULL)
        {
            arr.push_back(temp->data);
            temp=temp->next;
        }
        sort(arr.begin(),arr.end());
        temp=head;
        int i=0;
        while(temp!=NULL)
        {
            temp->data=arr[i];
            temp=temp->next;
            i++;
        }
        return head;
    }
};


void push(DLLNode **tailRef, int new_data)
{
   
    DLLNode *newNode = new DLLNode(new_data);

    
    newNode->next = NULL;

    newNode->prev = (*tailRef);

  
    if ((*tailRef) != NULL)
        (*tailRef)->next = newNode;

    (*tailRef) = newNode;
}

void printList(DLLNode *head)
{
  
    if (head == NULL)
        return;

    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a;
        cin >> a;
        DLLNode *head = new DLLNode(a);
        DLLNode *tail = head;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a;
            push(&tail, a);
        }
        Solution obj;
        printList(obj.sortAKSortedDLL(head, k));
        cout << "\n";
    }

    return 0;
}

