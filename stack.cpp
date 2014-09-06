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
int main(){
	stack s;
	s.push(1);
		s.push(2);
		s.pop();s.pop();
		cout<<s.top();
		return 0;
}
