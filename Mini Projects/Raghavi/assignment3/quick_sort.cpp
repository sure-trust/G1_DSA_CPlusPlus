#include <iostream>
#include <cstdio>
using namespace std;
 
/* a node of the singly linked list */
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
void quickSort(struct node **headRef);
int main()
{
	int t,n,x;
	cin>>t;
	while(t--){
		
        
        cin>>n;n=n-1;
		cin>>x;
        node *temp,*head = new node(x);
        temp=head;
        while(n--)
        {
			cin>>x;
          temp->next=new node(x);
          temp=temp->next;
			}
    
    quickSort(&head);
 
    printList(head);
 while(head!= NULL){
     temp=head;
     head=head->next;
     free(temp);
     
 }
	}
    return 0;
}

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

