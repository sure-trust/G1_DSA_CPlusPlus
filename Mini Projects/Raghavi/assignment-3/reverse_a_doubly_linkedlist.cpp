Node* reverseDLL(Node * head)
{
    Node* Prev = NULL;
    Node* curr = head;
    Node* Next = NULL;
    while(curr != NULL){
        Next = curr->next;
        curr->next = Prev;
        curr->prev = Next;
        Prev = curr;
        curr = Next;
    }
    head = Prev;
    return head;
}
