node*getTail(node*head){
    node*temp=head;
    while(temp!=nullptr&&temp->next!=nullptr){
        temp=temp->next;
    }
    return temp;
}
node*partition(node*head,node*tail){
    node*pivot=head;
    node*pre=head;
    node*cur=head->next;
    while(cur!=tail->next){
        if(pivot->data>cur->data){
            swap(pre->next->data,cur->data);
            pre=pre->next;
        }
        cur=cur->next;
    }
    swap(pivot->data,pre->data);
    return pre;
}
void  QuickSort(node*head,node*tail){
    if(head==NULL||tail==NULL||head==tail) return;
     node*pivot=partition(head,tail);
      QuickSort(head,pivot);
       QuickSort(pivot->next,tail);
}
void quickSort(struct node **headRef) {
    node*head=*headRef;
    if(head==NULL||head->next==NULL) return ;
    // get tail of limkedlist 
    node*tail=getTail(head);
    QuickSort(head,tail);
}

