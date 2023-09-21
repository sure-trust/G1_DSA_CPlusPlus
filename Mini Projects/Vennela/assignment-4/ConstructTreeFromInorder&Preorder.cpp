#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}
/*
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    int position(int in[],int inorderstart,int inorderend,int element,int n){
        for(int i=inorderstart;i<=inorderend;i++){
            if(in[i]==element){
                return i;
            }
            
        }
        return -1;
    }
    Node* solve(int in[],int pre[],int &index,int inorderstart,int inorderend,int n){
        if(index>=n || inorderstart>inorderend){
            return NULL;
        }
        int element=pre[index];
        index++;
       
        Node* root=new Node(element);
        int pos=position(in,inorderstart,inorderend,element,n);
        root->left=solve(in,pre,index,inorderstart,pos-1,n);
        root->right=solve(in,pre,index,pos+1,inorderend,n);
        
        return root;
    
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderindex=0;
        Node* temp=solve(in,pre,preorderindex,0,n-1,n);
        return temp;
    }
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

