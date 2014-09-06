#include<iostream>
using namespace std;
void permu(char *original,char *temp,int *visited,int n,int depth){
	if(depth==n){
	cout<<temp<<endl;
	return ;}
	else{
	for(int i=0;i<n;i++){
		if(visited[i]!=1){
			
			temp[depth]=original[i];
			temp[depth+1]='\0';
			visited[i]=1;
			
			permu(original,temp,visited,n,depth+1);
			visited[i]=0;
		}
	}
}

}
void permu2(char *original,int n,int depth){
	if(depth==n){
		cout<<original<<endl;
		return;
	}
	for(int i=depth;i<n;i++){
		char c=original[depth];
		original[depth]=original[i];
		original[i]=c;
		permu2(original,n,depth+1);
			 c=original[depth];
		original[depth]=original[i];
		original[i]=c;
	}
}
int main(){
	char a[4]={'a','b','c','d'};
	char temp[4];
	int visited[4]={0};
	for(int i=0;i<4;i++)cout<<visited[i];
//permu(a,temp,visited,4,0);
	permu2(a,4,0);
}
