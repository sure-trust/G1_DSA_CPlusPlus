bool isCircular(Node *head)
{
   // Your code here
   Node *temp = head;
   while(temp != NULL){
       if(temp->data != -1){
           temp->data = -1;
       }
       else if(temp->data == -1){
           return 1;
       }
       temp = temp->next;
   }
   return 0;
}

