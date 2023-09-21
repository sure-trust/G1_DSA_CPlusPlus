#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
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

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}

