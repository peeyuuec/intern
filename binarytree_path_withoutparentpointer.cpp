#include<iostream>
using namespace std;
struct node{
int data;
node* left;
node* right;
node* parent;};
void copytoarray(node *path1[],node *aux[],int depth){
	for(int i=0;i<=depth;i++){
		path1[i]=aux[i];
	}
}
void getpathfromroot(node *node1,node* root,node* aux[],int depth,node *path1[]){
if(root==NULL) return;
if(node1==root) {
	aux[depth]=node1;
	copytoarray(path1,aux,depth);
path1[depth+1]=NULL;
	return;
}
else {
	aux[depth]=root;
	getpathfromroot(node1,root->left,aux,depth+1,path1);
	getpathfromroot(node1,root->right,aux,depth+1,path1);
}
}
/*void print(node *node1,node *node2,node* root){
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
	
}*/
int main(){
	node *a=new node();
	node *b=new node();
	node *c=new node();
	node *d=new node();
	node *e=new node();
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
	c->left=e;
	e->data=0;
	e->left=NULL;
	e->right=NULL;
	d->left=NULL;
	d->right=NULL;
	d->data=5;
	node *arr[4],*aux[4];
	getpathfromroot(d,a,aux,0,arr);
	//print(c,d,a);
	int i=0;
	while(arr[i]!=NULL){
		cout<<arr[i]->data<<endl;
		i++;
	}
}

