#include<iostream>
using namespace std;
int mini=0,maxi=0;
struct node {
	int data;
	node *left;
	node *right;
};
int findwidth(node * root,int index){
	if(root==NULL)return 0;
	else{
		if(mini>index)
		mini=index;
		if(maxi<index)
		maxi=index;
		findwidth(root->left,index-1);
		findwidth(root->right,index+1);
	}
	
	return maxi-mini;
}

void writesum(node *root,int *sum,int index){
	if(root==NULL) return;
	else {
	
	sum[index-mini]+=root->data;
	writesum(root->left,sum,index-1);
	writesum(root->right,sum,index+1);
	
}
}
int main(){
	node *a=new node();
	node *b=new node();
	node *c=new node();
	node *d=new node();
	a->data=4;
	a->left=b;
	//b->parent=a;
	a->right=d;
	//d->parent=a;
	b->data=2;
	b->right=c;
//	c->parent=b;
	c->data=1;
	
	b->left=NULL;
	c->right=NULL;
	c->left=NULL;
	d->left=NULL;
	d->right=NULL;
	d->data=5;
	cout<<findwidth(a,0)<<endl;
	int n=findwidth(a,0)+1;
	int sum[n];
	for(int i=0;i<n;i++)
	sum[i]=0;
	
	writesum(a,sum,0);
	for(int i=0;i<=maxi-mini;i++){
		cout<<sum[i]<<" ";
	}
}
