#include<iostream>
using namespace std;
int find_lastone(int *a,int left,int right){
	
	if(left>right)return right;
	int mid=left+(right-left)/2;
	if(a[mid]==1){
		find_lastone(a,mid+1,right);
	}
	else find_lastone(a,left,mid-1);
}
int max_ones(int a[][5],int n){
	int index=find_lastone(a[0],0,n-1);
	
	for(int i=1;i<n;i++){
		if(index==n-1) return index+1;
		while(index<n-1&&a[i][index+1]==1){
			index++;
		}
	}
	return index+1;
}
int main(){
	int a[5][5]={{1,1,1,0,0},{1,1,1,1,1},{1,1,1,1,0},{1,1,1,1,0},{1,1,1,1,0}};
	cout<<find_lastone(a[0],0,4);
	cout<<max_ones(a,5);
}
