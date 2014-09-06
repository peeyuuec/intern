#include<iostream>
using namespace std;
int binary(int *a,int left,int right,int data){
	if(left>right) return -1;
	else{
		int mid=left+(right-left)/2;
		if(a[mid]==data) return mid;
		else{
			if(a[mid]>data) binary(a,left,mid-1,data);
			else binary(a,mid+1,right,data);
		}
	}
}
int main(){
	int a[5]={2,4,5,6,7};
	cout<<binary(a,0,4,5);
	return 0;
}
