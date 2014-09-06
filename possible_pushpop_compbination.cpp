#include<iostream>
using namespace std;
struct node{
	int data;
	node* next;
};
class stack{
	private:
		node *head;
		public:
			stack(){
				head=NULL;
			}
			int top(){
				if(!isempty())return head->data;
				else return -1;
			}
			int push(int n){
				node *newnode=new node;
				newnode->data=n;
				if(isempty()){
					newnode->next=NULL;
					head=newnode;
				}
				else {
					newnode->next=head;
					head=newnode;
				}
			}
			int pop(){
				if(!isempty()){
					node* temp=head;
				head=head->next;
				delete(temp);}
			}
			int isempty(){
				if(head==NULL) return 1;
				else return 0;
			}
};
int possible(int a[],int b[],int n,int m){
	if(n!=m)return 0;
	stack s;int ptr1=0,ptr2=0;

	for(int i=0;i<n;i++){
		s.push(a[i]);
		while(s.top()==b[ptr2]&&!s.isempty()){
			cout<<s.top();
			s.pop();
			ptr2++;
		}
		
	}
	if(!s.isempty())return 0;
	else return 1;
	
}
int main(){
	
		int n=10;
	int a[10]={1,3,2,2,4,1,1,4,5,6};
		int m=10;
	int b[10]={1,3,2,2,4,1,1,3,5,6};
	cout<<possible(a,b,10,10);
}
