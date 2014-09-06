#include<iostream>
using namespace std;
int maxsum_subarray(int a[],int n){
	int m[n],maxsum;
	if(a[0]>0) m[0]=a[0];
	else m[0]=0;
	for(int i=1;i<n;i++){
		int temp;
		if(m[i-1]+a[i]<0) m[i]=0;
		else m[i]=m[i-1]+a[i];
	}
	maxsum=m[0];
	for(int i=1;i<n;i++){
	if(maxsum<m[i])maxsum=m[i];
		
	}
	return maxsum;
	
}
int main(){
	int a[6];
	a[0]=2;a[1]=11;a[2]=-20;a[3]=13;a[4]=-5;a[5]=2;
	cout<<maxsum_subarray(a,6);
}
