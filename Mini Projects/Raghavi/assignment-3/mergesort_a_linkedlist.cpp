class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        vector<int>elements;
        Node *temp = head;
        while(temp != NULL){
            elements.push_back(temp->data);
            temp = temp->next;
        }
        sort(elements.begin(),elements.end());
        Node *temp_Head = NULL;
        Node *temp_Tail = NULL;
        for( int i = 0 ; i < elements.size() ; i++){
            Node *temp = new Node(elements[i]);
            if(temp_Head == NULL){
                temp_Head = temp;
                temp_Tail = temp;
            }
            else{
                temp_Tail->next = temp;
                temp_Tail = temp;
            }
        }
        return temp_Head;
        
    }
};
