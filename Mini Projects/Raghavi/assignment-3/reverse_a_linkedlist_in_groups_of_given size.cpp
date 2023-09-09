class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
       int c=0;
       node*next;
       node*curr= head;
       node*prev= NULL;
       while(curr!=NULL && c<k){
           next= curr-> next;
           curr->next = prev;
           prev= curr;
           curr= next;
           c++;
           
       }
       if(next!= NULL){
           head->next= reverse(next,k);
          
       }
       return prev;
      
    }
};

