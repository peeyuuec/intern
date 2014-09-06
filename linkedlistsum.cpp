#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
int size;
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
		node *gethead(){
			return head;
		}
};
node* sum(node* ptr1,node* ptr2,int size1,int size2){
	int n1[size1],n2[size2],num1=0,num2=0;
	for(int i=size1-1;i>=0;i--){
		n1[i]=ptr1->data;
		ptr1=ptr1->next;
		
	}
	for(int i=size2-1;i>=0;i--){
		n2[i]=ptr2->data;
		ptr2=ptr2->next;	
	}
	for(int i=size1-1;i>=0;i--){
		num1=num1*10 +n1[i];
	}
	for(int i=size2-1;i>=0;i--){
		num2=num2*10 +n2[i];
	}
	int sum=num1+num2;
	int count=0,sum2=sum;
	while(sum2){
	sum2=sum2/10;
	count++;	
	}
	sum2=sum;
	int result[count];
	size=count;
	for(int i=count-1;i>=0;i--){
		result[i]=sum2%10;
		sum2=sum2/10;
	}
	ll link;
for(int i=0;i<count;i++){
	link.add(result[i]);
}
	return link.gethead();
}
int main(){
	ll l1,l2;
	l1.add(2);
	l1.add(2);
	l1.add(3);
	l2.add(1);
	l2.add(2);
	l2.add(9);
node *var=	sum(l1.gethead(),l2.gethead(),3,3);
for(int i=0;i<size;i++){
	cout<<var->data;
	var=var->next;
}
return 0;
}
