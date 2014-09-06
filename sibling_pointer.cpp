#include<iostream>
#include<queue>
using namespace std;
struct node {
int data;
node *left;
node *right;
node *sibling;};
void levelorder(node *root){
	node *temp=root;
	if (root==NULL)return;
	queue<node *> q;
	q.push(temp);
	q.push(NULL);
//	cout<<q.empty();
	while(!q.empty()){
		temp=q.front();
		q.pop();
		
		if(temp!=NULL){
		if(temp->left!=NULL)	q.push(temp->left);
	    if(temp->right!=NULL)	q.push(temp->right);
		if(q.front()==NULL) q.push(NULL);
		temp->sibling=q.front();
		cout<<temp->data<<endl;
	}
	
	}
	
}
void levelorderprint(node *root){
	node *temp=root;
	if (root==NULL)return;
	queue<node *> q;
	q.push(temp);
	
	while(!q.empty()){
		temp=q.front();
		q.pop();
		cout<<temp->data<< "_";
		if(temp->sibling!=NULL) cout<<temp->sibling->data;
		else cout<<endl;
	if(temp->left!=NULL) q.push(temp->left);
	if(temp->right!=NULL) q.push(temp->right);
		
	}
	
}
int main(){
	node * a=new node ();
	node * b=new node ();
	node * c=new node ();
	node * d=new node ();
	node * e=new node ();
	node * f=new node ();
	a->data=1;b->data=2;c->data=3;d->data=4;e->data=5;f->data=6;
    a->left=b;a->right=c;
    b->left=d;b->right=e;
    d->left=NULL;d->right=NULL;
    e->left=NULL;e->right=NULL;
    c->left=f;c->right=NULL;
    f->left=NULL;c->right=NULL;
    levelorder(a);
    levelorderprint(a);
}
