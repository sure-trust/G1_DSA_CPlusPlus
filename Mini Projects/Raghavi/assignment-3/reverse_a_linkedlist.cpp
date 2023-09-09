class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node *prev=NULL;
        struct Node *nxt=NULL;
        while(head!=NULL){
            nxt=head->next;
            head->next= prev;
            prev=head;
            head=nxt;
        }
        head=prev;
        return head;
    }
    
};
