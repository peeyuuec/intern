#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
	node* random;
};
class ll{
	private:
	int data;
	node *head;
	public:
		ll(){
			head=NULL;
		}
		int add(int num){
			node *newnode=new node;
			if(head==NULL){
				newnode->data=num;
				newnode->next=NULL;
				head=newnode;
			}
			else {
				node *temp=head;
				while(temp->next){
					temp=temp->next;
					
				}
				newnode->next=NULL;
				newnode->data=num;
				temp->next=newnode;
			}
		}
		void display(){
			node *temp=head;
			while(temp){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
		node* reverse(){
			node *temp1,*temp2=NULL,*temp3;
			if(head==NULL||head->next==NULL)
			return head;
			temp1=head->next;
			while(temp1)	{
				head->next=temp2;
				temp2=head;
				head=temp1;
				temp1=temp1->next;
			}
		
			head->next=temp2;
			return head;
		}
		void changehead(node *head1){
			head=head1;
		}
		node* returnhead(){
			return head;
		} 
		int size(){
			node* temp=head;
			int n=0;
			while(temp){
				n++;
				temp=temp->next;
			}return n;
		}
		int addrandom(int p,int q){
			node* temp=head,*temp2=head;
			int i=0;
			while(temp){
				temp=temp->next;
				i++;
			}
			if(i<p||i<q)return 0;
			int count=p;temp=head;
			for(int i=1;i<p;i++){
				temp=temp->next;
			}
			for(int i=1;i<q;i++){
				temp2=temp2->next;
			}
			temp->random=temp2;
			return 1;
		}
		node* clone(){
		int n=size();
		node *temp=head;
		if(n==0)return NULL;
		for(int i=0;i<n;i++){
			node* newnode=new node();
			newnode->data=temp->data;
			newnode->next=temp->next;
			temp->next=newnode;
		temp=temp->next->next;
		}
	node *t=head;
	while(t){cout<<t->data; t=t->next;}
	
		temp=head;	
		for(int i=0;i<n;i++){
		temp->next->random=	temp->random->next;
		temp=temp->next->next;
		
		}
		temp=head;
		node* newhead=head->next;

		for(int i=1;i<n;i++){
			node *t=temp->next;
		temp->next=temp->next->next;		
		t->next=temp->next->next;
		temp=temp->next;	
		}
			t=temp->next;
			temp->next=NULL;
			t->next=NULL;
		return newhead;
		}
		
};
int main(){
	ll l,l2;
	l.add(1);

	l.add(2);
	l.add(3);
	l.add(2);
	l.add(2);
	l.add(3);
	l.addrandom(1,3);
	l.addrandom(2,4);
	l.addrandom(3,4);
	l.addrandom(4,2);
	l.addrandom(5,1);
	l.addrandom(6,5);
	node *oldnode=l.returnhead();
node* newhead=l.clone();
l2.changehead(newhead);
	l2.display();
}

