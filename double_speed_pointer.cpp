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
		void makecircular(int pos){
			node *temp1=head,*temp2=head;
			for(int i=0;i<pos;i++)
			temp1=temp1->next;
			while(temp2->next){
				temp2=temp2->next;
			}
			temp2->next=temp1;
		}
		node* find_circular_point(){
			node *temp1=head,*temp2=head;
			int isloop=0;
			while(1){
				if(temp1==NULL||temp2==NULL||temp2->next==NULL)
				{
				break;}
				
				temp1=temp1->next;
				temp2=temp2->next->next;
				if(temp1==temp2)
				{isloop=1;
				break;	
				}
			}
		
			if(isloop){
				temp1=head;
			while(temp1!=temp2){
				
				temp1=temp1->next;
				temp2=temp2->next;
			}
			return temp1;	
			}
			return NULL;
			
		}
};
int main(){
	ll l;
	l.add(1);
	l.add(2);
	l.add(3);
	l.add(4);
	l.add(5);
	l.add(6);
	l.makecircular(2);
	cout<<l.find_circular_point()->data;
	//l.display();
	return 0;
}
