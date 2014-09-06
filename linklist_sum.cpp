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
		
};
node* sum(node *head1,node *head2){
			int n1=0,n2=0;
			node *temp1=head1,*temp2=head2;
			while(temp1){
				n1++;
				temp1=temp1->next;
			}
			cout<<"*"<<n1<<"*"<<endl;
			while(temp2){
				n2++;
				temp2=temp2->next;
			}
				cout<<"*"<<n2<<"*"<<endl;
			if(n1<n2){temp1=head1;
			head1=head2;
			head2=temp1;
			}
			temp1=head1;
			temp2=head2;
			node *temp=NULL,*newhead=NULL;
			int carry=0;
			while(temp1){
			int sum	=temp1->data;
			
			temp1=temp1->next;
			if(temp2){
				sum+=temp2->data;
				temp2=temp2->next;
				
			}
			
			node *newnode=new node();
			newnode->data=sum%10+carry;
			
			carry=sum/10;
			if(newhead==NULL){
				newhead=newnode;
				
				temp=newnode;
				newnode->next=NULL;
			}
			else {
				temp->next=newnode;
				newnode->next=NULL;
				temp=temp->next;
			}
			}
			if(carry>0){
				node *newnode=new node();
				newnode->data=carry;
				temp->next=newnode;
				newnode->next=NULL;
			}
		return newhead;	
		}
int main(){
		ll l1,l2,l3;
	l1.add(1);
	l1.add(2);
	//l1.add(3);
	l2.add(1);
	l2.add(2);
	l2.add(3);
//	l.display();
	    node *head1=l1.reverse();	l1.display();cout<<endl;
		node *head2=l2.reverse();l2.display();cout<<endl;
		node *nlink=sum(head1,head2);
		l3.changehead(nlink);
		l3.reverse();
		l3.display();
		//l1.reverse();
		//l2.reverse();
	//l1.display();
	//cout<<endl;
	//l2.display();
	return 0;
}
