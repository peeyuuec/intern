#include<iostream>
#include<cstring>
using namespace std;
void removeadjadupli(char *str,int depth)
{
	if(depth<strlen(str)){
	
	cout<<str[depth];
	char c=str[depth];
	while(str[depth+1]==c){
		depth++;
	}
	removeadjadupli(str,depth+1);

}
}
int main(){
	char str[100];
	cin>>str;
	removeadjadupli(str,0);
}
