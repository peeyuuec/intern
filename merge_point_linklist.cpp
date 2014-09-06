//given two linklist find joining point
#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
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
		void reverse(){
			node *temp1,*temp2=NULL;
			if(head==NULL||head->next==NULL)
			return;
			temp1=head->next;
			while(temp1)	{
				head->next=temp2;
				temp2=head;
				head=temp1;
				temp1=temp1->next;
			}
		
			head->next=temp2;
		}
};
int findpoint(node *head1,node* head2){
	int size1=0,size2=0;
	node* temp1=head1,*temp2=head2;
	while(temp1){
		size1++;
		temp1=temp1->next;
	}
	while(temp2){
		size2++;
		temp2=temp2->next;
	}
	
	if(size1<size2){
		node *temp= head1;
		head1=head2;
		head2=temp;
	}
	int diff=(size1>size2)?(size1-size2):(size2-size1);
	for(int i=0;i<diff;i++){
		head1=head1->next;
	}
	while(head1!=head2&&head1){
		head1=head1->next;
		head2=head2->next;
	}
	cout<<head1->data;
}
int main(){
	node *n11=new node();
		node *n12=new node();
			node *n13=new node();
			node *n14=new node();
				node *n21=new node();
					node *n22=new node();
						node *c1=new node();
							node *c2=new node();
	n11->next=n12;
	n12->next=n13;
	n13->next=n14;
	n14->next=c1;
	c1->next=c2;
	n21->next=n22;
	n22->next=c1;
	n11->data=1;
	n12->data=2;
	n13->data=3;
	n14->data=4;
	n21->data=5;
	n22->data=6;
	c1->data=7;
	c2->data=8;
findpoint(n11,c1);
}
