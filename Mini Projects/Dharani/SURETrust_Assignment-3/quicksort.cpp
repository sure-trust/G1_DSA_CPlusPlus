#include <iostream>
#include <cstdio>
using namespace std;
 
struct node
{
    int data;
    struct node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};


void push(struct node** head_ref, int new_data)
{
    
    struct node* new_node = new node(new_data);
 
   
    new_node->next = (*head_ref);
 
   
    (*head_ref)    = new_node;
}
 

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


void quickSort(struct node **headRef) {
    struct node *p,*q;
    p=*headRef;
    while(p!=0)
    {
        q=p->next;
        while(q!=0)
        {
            if(p->data>q->data)
            {
                int temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
}