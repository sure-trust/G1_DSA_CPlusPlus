class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        if(head==NULL){
            return -1;
        }
        
            Node* fast=head;
            Node* slow=head;
            while(fast!=NULL && fast->next!=NULL){
                fast=fast->next->next;
                slow=slow->next;
            
       } return slow->data;
    }
};

