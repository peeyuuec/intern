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
		
};
int main(){
	ll l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.add(2);
	l.add(2);
	l.add(3);
	int k=3;
	int n=l.size();
	if(k>n)return -1;
	node *ptr1=l.returnhead(),*ptr2=l.returnhead();
	for(int i=0;i<k;i++){
		ptr2=ptr2->next;
	}
	while(ptr2){
		ptr2=ptr2->next;
		ptr1=ptr1->next;
	}
	cout<<ptr1->data;
}

