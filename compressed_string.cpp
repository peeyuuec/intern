#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;
int isalpha(char *str,int depth){
	if((int)str[depth]>(int)'9'||(int)str[depth]<(int)'0') return 1;
	else return 0;
}
int extractno(char * str,int &depth){
	char t[100];
	int i=0;
	while(!isalpha(str[depth])){
		t[i]=str[depth];
		depth++;
		i++;
	}
	t[i]='\0';
	return atoi(t);
}
void multiplecopy(char *temp,int &index,int n){
	int p=index;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<p;j++){
			temp[index]=temp[j];
			index++;
		}
	}
	temp[index]='\0';
	cout<<endl;
}
void print(char *str,int k){
	int depth=0,index=0;
	char temp[1000];
	int size=strlen(str);
	while(depth<size){
		if(isalpha(str,depth)){
		
			temp[index]=str[depth];
				
			temp[index+1]='\0';
			depth++;
			index++;
		}
		else{
			int n=extractno(str,depth);
		//	cout<<"Extracted"<<n;
			multiplecopy(temp,index,n);
		}
	}
	cout<<temp[k]<<endl;
	cout<<temp;
}
int main(){
	char str[100];
	int k;
	cin>>str>>k;
	int depth=3;
	
//multiplecopy(str,depth,5);
//cout<<depth;
print(str,k);
//cout<<endl<<str<<endl;
	//print(str,k);
	return 0;
}
