#include<iostream>
using namespace std;
int max(int a,int b){
	return a>b?a:b;
}
int maxsum(int *a,int n){
	int m[n];
	m[0]=a[0];
	m[1]=a[0]>a[1]?a[0]:a[1];
	
	for(int i=2;i<n;i++){
		m[i]=max(a[i]+m[i-2],m[i-1]);
	}
	return m[n-1];
}
int main(){
	int a[5]={2,1,4,7,1};
	cout<<maxsum(a,5);
}
