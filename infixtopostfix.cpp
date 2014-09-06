#include<iostream>
#include<cstring>
#include<stack>
int priority[256];

using namespace std;
void fillpriority(){
	for(int i=0;i<256;i++)
{
	priority[i]=-1;
}
priority[(int)'+']=0;
priority[(int)'-']=0;
priority[(int)'*']=1;
priority[(int)'/']=1;
priority[(int)'(']=2;
priority[(int)')']=0;
}
int isoperator(char c){
	if((int) c==(int)'+'||(int) c==(int)'-'||(int) c==(int)'*'||(int) c==(int)'/'||(int) c==(int)'('||(int) c==(int)')')return 1;
	else return 0;
}
void infixtopost(char *infix){
	int size=strlen(infix);
	stack<char> s;
	for(int i=0;i<size;i++){
		if(!isoperator(infix[i])){
			cout<<infix[i];
		}
		else if(infix[i]=='('){
			s.push('(');
		}
		else if(infix[i]==')'){
			while(s.top()!='('){
				cout<<s.top();
				s.pop();
			}
			s.pop();
			
		}
		else{
			
			while(!s.empty()&&s.top()!='(' &&priority[(int)s.top()]>=priority[(int)infix[i]]){
			cout<<s.top();
			s.pop();
			//cout<<"v";
			}
			s.push(infix[i]);
		}
		
	}
	while(!s.empty()){
			cout<<s.top();
			s.pop();
		}
}
int main(){
	//cout<<isoperator('c');
	fillpriority();
l:	char c[10];
	cin>>c;
	infixtopost(c);
	cout<<endl;
	goto l;
	return 0;
}
