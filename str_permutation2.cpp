#include<iostream>
#include<cstring>
using namespace std;
void permute(char a[],int size,char temp[],int depth,int visited[]){
	if(depth==size){
		cout<<temp<<endl;
	}
	else {
		for(int i=0;i<size;i++){
			if(visited[i]==0){
				visited[i]=1;
				temp[depth]=a[i];
				temp[depth+1]='\0';
				permute(a,size,temp,depth+1,visited);
				visited[i]=0;
			}
		}
	}
}
int main(){
	char str[1000],temp[1000];
	int visited[1000]={0};
	cin>>str;
	printf("%s\n",str);
    //printf("%c\n",*str);
	permute(str,strlen(str),temp,0,visited);
}
