#include<iostream>
using namespace std;
struct node{
int data;
node* left;
node* right;
node* parent;};
node* getancester(node *node1,node *node2,node* root){
	node *temp1=node1,*temp2=node2;
while(temp1!=root){
	temp1=temp1->parent;
	while(temp2!=temp1&&temp2!=root){
		temp2=temp2->parent;
	}
	if(temp1==temp2)return temp2;
}
}
void print(node *node1,node *node2,node* root){
	if(node1==node2) return;
	node* ans=getancester(node1,node2,root);
	cout<<ans->data<<endl;
	while(node1!=ans){

	cout<<node1->data<<" ";
	node1=node1->parent;
	}
	//cout<<"good";
	while(ans!=node2){
	if(ans->data>node2->data) {
		cout<<ans->data<< " ";
	ans=ans->left;
	
	}
	else if(ans->data<=node2->data){
			cout<<ans->data<< " ";
	ans=ans->right;	}
	}
	cout<<node2->data;
	
}
int main(){
	node *a=new node();
	node *b=new node();
	node *c=new node();
	node *d=new node();
	a->data=4;
	a->left=b;
	b->parent=a;
	a->right=d;
	d->parent=a;
	b->data=2;
	b->left=c;
	c->parent=b;
	c->data=1;
	
	b->right=NULL;
	c->right=NULL;
	c->left=NULL;
	d->left=NULL;
	d->right=NULL;
	d->data=5;
	print(c,c,a);
}

