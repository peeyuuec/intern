#include<iostream>
using namespace std;
int search(int start,int end,int n){
	if(start<=end){
		int mid=start+(end-start)/2;
		cout<<mid<<endl;
		if(mid*mid==n)return mid;
		else if(mid*mid>n)search(start,mid-1,n);
		else search(mid+1,end,n);
	}
}
int main(){
	
	int n=49;
	int i;
	for(i=2;;i=i*2){
		if(i*i==n)return i;
		if(i*i>=n)
		break;
	}
	cout<<search(i/2,i,n);
}
