Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* ans = new Node(-1);
    Node* temp = ans;
    
    while( head1!=NULL && head2!=NULL)
    {
        if( head1->data == head2->data)
        {
            Node* newnode = new Node(head1->data);
            temp->next = newnode;
            temp = newnode;
            head1 = head1->next;
            head2 = head2->next;
        }
        else if( head1->data < head2->data)
        {
            head1 = head1->next;
        }
        else if( head2->data <head1->data)
        {
            head2= head2->next;
        }
    }
    
    return ans->next;
}
