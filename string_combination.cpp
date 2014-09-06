#include<iostream>
#include<cstring>
using namespace std;
void print(int depth,char comb[100],int start,char original[100],char arr[100]){
	int length=strlen(original);
	for(int i=start;i<length;i++){
		if(arr[i]!='0'){
		arr[i]=0;
		comb[depth]=original[i];
		comb[depth+1]='\0';
		cout<<comb<<endl;
		if(i<length)print(depth+1,comb,start+1,original,arr);
		arr[i]=1;
	}
	}
}

int main(){
	char arr1[100],brr1[100];
	char arr[100];
	cin>>arr1;
	brr1[0]='\0';
	int i;
	for(i=0;i<strlen(arr1);i++)
	arr[i]='1';
	arr[i]='\0';
	print(0,brr1,0,arr1,arr);
	return 0;
}
