#include<iostream>
using namespace std;
struct node {
	int data;
	node *left;
	node* right;
};
struct stacknode{
	node* data;
	stacknode* next;
};
class stack{
	private:
		stacknode *head;
		public:
			stack(){
				head=NULL;
			}
			node* top(){
				if(!isempty())return head->data;
				else return NULL;
			}
			int push(node* n){
				stacknode *newnode=new stacknode;
				newnode->data=n;
				if(isempty()){
					newnode->next=NULL;
					head=newnode;
				}
				else {
					newnode->next=head;
					head=newnode;
				}
			}
			void pop(){
				if(!isempty()){
					stacknode* temp=head;
				head=head->next;
				delete(temp);}
			}
			int isempty(){
				if(head==NULL) return 1;
				else return 0;
			}
};

class BST{
	private :
		node *root;
		public:
			BST(){
				root=NULL;
			}
		void insert(int data ){
			node* temp=root;
			
			if(root==NULL) 
			{
				temp=new node();
				temp->data=data;
				root=temp;
					root->left=NULL;
					root->right=NULL;
			}
			else{
				while(1){
					if(data>=temp->data){
						if(temp->right==NULL) {
							node *newnode=new node();
							newnode->data=data;
							temp->right=newnode;
							newnode->left=NULL;
							newnode->right=NULL;
							return;
						}
						else{
							temp=temp->right;
						}
						
					}
					else {
						
						if(temp->left==NULL) {
							node *newnode=new node();
							newnode->data=data;
							temp->left=newnode;
							newnode->left=NULL;
							newnode->right=NULL;
							return;
						}
						else{
							temp=temp->left;
						}
						
					
					}
				}
			}
		}
		node *getroot(){
			return root;
		}
		void inorder(){
			stack s;
			node *temp=root;
			//s.push(temp);
			
			while(temp){
				s.push(temp);
				temp=temp->left;
			}
			while(!s.isempty()){
			temp=s.top();
						s.pop();
			cout<<temp->data;
			temp=temp->right;
			while(temp!=NULL){
				s.push(temp);
				temp=temp->left;
			}}
		}
};
node *makeBST(int *a,int n){
	BST bst;
	for(int i=0;i<n;i++)
	bst.insert(a[n-i-1]);
	bst.inorder();
	return bst.getroot();
	
}
int main()
{
	int arr[7]={1,4,4,6,10,8,5};
	node *temp=makeBST(arr,7);
	
}
