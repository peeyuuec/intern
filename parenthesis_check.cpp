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
int parenthesis_check(char a[],int n){
	stack s;
	for(int i=0;i<n;i++){
		switch(a[i]){
			case '{':s.push('{');break;
			case '[':s.push('[');break;
			case '(':s.push('(');break;
			case '}':if(s.top()=='{') s.pop();else return 0;break;
			case ']':if(s.top()=='[') s.pop();else return 0;break;
			case ')':if(s.top()=='(') s.pop();else return 0;break;
			default:;
		}
	}
	return 1;
}
int main(){
	char a[6]={'{','a','b',']','b','}'};
	cout<<parenthesis_check(a,6);
}
