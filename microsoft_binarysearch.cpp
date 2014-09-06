#include<iostream>
#include<cstring>
using namespace std;
int binarysearch(char *a[],int n,char str[],int start,int end){
	if(start>end)return -1;
	int mid=start+(end-start)/2;
	while(strcmp(a[mid],"")==0&&mid<n-1){
		mid++;
	}
	if(strcmp(str,a[mid])==0)return mid;
	int rank=0;
	
	for(int i=0;i<(strlen(str)>strlen(a[mid])?strlen(str):strlen(a[mid]));i++){
		if(str[i]!=a[mid][i]){
			if((int)str[i]>(int)a[mid][i]){
			rank=1;
			break;}
		}
	}
	if(rank==0){
		if(strlen(str)>strlen(a[mid])) rank=1;	
	}
	
	if(rank==0){
		binarysearch(a,n,str,start,mid-1);
	}
	else 	binarysearch(a,n,str,mid+1,end);
}
int main(){
	char *str="aaa";
	char *a[12]={"aaa","","aab","","aba","","","","hfd","","","fdh"};
	
	cout<<binarysearch(a,12,str,0,11);
}
