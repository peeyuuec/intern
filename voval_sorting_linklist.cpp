#include<iostream>
using namespace std;
struct node{
	char data;
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
		void vovelsort(){
			char vov[5]={'a','e','i','o','u'};
			int count[5]={0};
			int n=0;
				if(head==NULL){n=0;return;
				}
			node* temp=head,*t;
			while(temp){
				switch(temp->data){
					case 'a':count[0]++;break;
						case 'e':count[1]++;break;
							case 'i':count[2]++;break;
								case 'o':count[3]++;break;
									case 'u':count[4]++;break;
									default:;
				}
			n++;
			t=temp;
			temp=temp->next;	
			}
			temp=t;
			for(int i=0;i<5;i++)
			cout<<count[i];
			if(n==1)return ;
			node *temp1=NULL, *temp2=head, *temp3=head;
		
			for(int i=0;i<5;i++){
				temp1=NULL; temp2=head; temp3=head;
			for(int j=0;j<n-1;j++){
				temp3=temp3->next;
				if(vov[i]==temp2->data){
					if(count[i]!=0){
					
					if(temp1!=NULL){
						temp1->next=temp3;
					}
					if(head==temp2)head=head->next;
					temp->next=temp2;
					temp2->next=NULL;
					temp=temp2;
					count[i]--;}
					else break;
				}
				
				temp1=temp2;
					temp2=temp3;
					
			}
				
			}	
				}
};
int main(){
	ll l;
	l.add('b');
	l.add('a');
		l.add('b');
			l.add('e');
	l.add('a');
		l.add('d');
	
	l.vovelsort();
	l.display();
}
