class Solution
{
    public:
    
    bool isLoop(Node *head){
        if(head == NULL)
            return false;
        if(head->next == NULL)
            return false;
            
        Node *slow = head;
        Node *fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return true;
        }
        
        return false;
    }
    
    Node *findStart(Node* head){
        Node *slow = head;
        Node *fast = head;
        
        while(true){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                break;
        }
        
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
    
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        bool check = isLoop(head);
        if(check == false)
            return;
            
        Node *start = findStart(head);
        Node* cur = start;
        while(cur->next != start)
            cur = cur->next;
        cur->next = NULL;
        return;
    }
};

