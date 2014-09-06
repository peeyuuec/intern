//check if a linked list is palindromic or not
//1.first reverse halfo of linklist
//2. check for palindrom
//3. return reverse the linkedlist

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
		int check_reverse(){
			node *temp1=head,*temp2=head,*t1=NULL,*t2=head;
			int pos1,pos2,i=0;
			while(temp1!=NULL){
				i++;
				temp1=temp1->next;
			}
			pos1=(i+1)/2;
			pos2=(i)/2 +1;
			if(i==0||i==1){
				return 1;
			}
			if(i==2) return (head->data==head->next->data);
			if(i%2!=0){
				pos1=pos1-1;
				pos2=pos2+1;
			}
			//cout<<pos1<<pos2<<endl;
			temp1=head;
			int p=0;
			while(p <pos2-1){
				temp2=temp2->next;
				p++;
			}
			
			p=0;
			
			t2=t2->next;
			while(p<pos1-1){
				temp1->next=t1;
				t1=temp1;
				temp1=t2;
				t2=t2->next;
				p++;
			}
			temp1->next=t1;
			//cout<<temp1->data<<temp2->data;
		while(temp1!=NULL){
			//cout<<"*"<<temp1->data<<endl;
			if(temp1->data!=temp2->data) return 0;
			temp1=temp1->next;
			temp2=temp2->next;
		}
		return 1;
		}
		int check_array(){
			node *temp=head;
			int size=0;
			while(temp){
				temp=temp->next;
				size++;
			}
			int arr[size];
			temp=head;int i=0;
			while(temp){
				arr[i]=temp->data;
				i++;
				temp=temp->next;
			}
			for(int i=0;i<(size+1)/2;i++){
				if(arr[i]!=arr[size-1-i])return 0;
			}
			return 1;
		}
};
int main(){
	ll l;
	l.add(1);
	l.add(2);
l.add(2);
l.add(2);
	l.add(1);
	//l.display();
cout<<	l.check_array();
	
}

