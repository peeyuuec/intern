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
int main(){
	ll l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.display();
	l.reverse();
	l.display();
	return 0;
}
