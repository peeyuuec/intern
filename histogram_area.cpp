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
int histogram(int *h,int n){
	stack s;int max=0;
	int i=0;
	while(i<n){
		if(s.isempty()||h[s.top()]<h[i]){
			s.push(i);i++;
		
		}
		else {int tp=s.top();
		      s.pop();
			
				int ar=h[tp]*(s.isempty()?i:i-s.top()-1);
					cout<<ar;
				if(ar>max)max=ar;
			
		}
	}
	while(!s.isempty()){
		//cout<<endl<<s.top();
		int tp=s.top();
		      s.pop();
			
				int ar=h[tp]*(s.isempty()?i:i-s.top()-1);
				cout<<ar<<endl;
				if(ar>max)max=ar;
	}
	return max;
}
int main()
{
    int hist[] = {6, 2, 5, 4, 5, 1, 6};
    int n = sizeof(hist)/sizeof(hist[0]);
    cout << "Maximum area is " << histogram(hist, 7);
    return 0;
}
