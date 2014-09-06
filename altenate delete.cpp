#include<iostream>
using namespace std;
struct node{
	int data;
	node* right;
	node* left;
};
node *del(node *head){
	if(head==NULL||head->right==NULL) return head;
	else {
		head->right=head->right->right;
		del(head->right);
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
    a->right=b;b->right=c;c->right=d;d->right=e;e->right=f;f->right=NULL;
    f->left=e;e->left=d;d->left=c;c->left=b;b->left=a;a->left=NULL;
    del(a);
    node *temp=a;
    while(temp){
    	cout<<temp->data;
    	temp=temp->right;
    }
	}
