#include<stdio.h> 
#include<stdlib.h> 
 

struct Node
{
  int data;
  struct Node *next;
  
  Node(int x){
      data = x;
      next = NULL;
  }
}; 

void splitList(struct Node *head, struct Node **head1_ref,   struct Node **head2_ref);
 struct Node* newNode(int key)
{
    struct Node *temp = new Node(key);
    
    return temp;
}


void printList(struct Node *head)
{
  struct Node *temp = head; 
  if(head != NULL)
  {
    do {
      printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != head);
    printf("\n");
  }
}


int main()
{
  
   int t,n,i,x;
    scanf("%d",&t);
   while(t--)
   {
	   struct Node *temp,*head = NULL;
       struct Node *head1 = NULL;
       struct Node *head2 = NULL;
	   scanf("%d",&n);
	   scanf("%d",&x);
	   head=new Node(x);
	   temp=head;
	   for(i=0;i<n-1;i++){
	   scanf("%d",&x);
	   
	   temp->next=new Node(x);
	   
	   temp=temp->next;
	       
	   }
       
       temp->next=head;
  
       splitList(head, &head1, &head2);
  
   
      printList(head1);  
 
      printList(head2);  
   
   }
  return 0;
}



void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
  Node *fast=head,*slow=head;
    int count=1;
    fast=fast->next;
    while(fast!=slow){
        fast=fast->next;
        count++;
    }
    if(count%2==0){
        count=count/2;
    }else{
        count=count/2+1;
    }
    
    
    *head1_ref=head;
    fast=head;
    count--;
    while(count--){
        fast=fast->next;
    }
    Node *p=fast->next;
    fast->next=head;
    *head2_ref=p;
    fast=p;
    while(fast->next!=head){
        fast=fast->next;
    }
    fast->next=*head2_ref;
    fast->next=p;
}