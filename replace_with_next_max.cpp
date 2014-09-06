#include<iostream>
using namespace std;
int main(){
	int n=10;
	int a[10]={1,3,2,2,4,1,1,1,2,0};
	int max1=-1;
	int temp;
	for(int i=n-1;i>=0;i--){
		temp=a[i];
		a[i]=max1;
		max1=max1>temp?max1:temp;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
