#include<iostream>
using namespace std;
struct node {
	int data;
	node* left;
	node* right;
};
int max(int a,int b){
	if(a>b)return a;
	else return b;
}
int diameter(node *root,int *height){
	int lh=0,rh=0;
	if(root==NULL){
		*height=0;
		return 0;
	}
	cout<<"*"<<root->data<<"*";
	//cout<<*height<<endl;
	int ldia=diameter(root->left,&lh);
	int rdia=diameter(root->right,&rh);
	
	*height=max(lh,rh)+1;
	cout<<"ok";
	return max(lh+rh+1,max(ldia,rdia));	
}
void inorder(node *root){
	if(root==NULL)return ;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
	
}
int main(){
	node *a=new node();
	node *b=new node();
	node *c=new node();
	node *d=new node();
	a->data=1;
	a->left=b;
	a->right=d;
	b->data=2;
	b->left=c;
	c->data=3;
	
	b->right=NULL;
	c->right=NULL;
	c->left=NULL;
	d->left=NULL;
	d->right=NULL;
	d->data=4;
	inorder(a);
	int ele=0;
	cout<<diameter(a,&ele);
}
