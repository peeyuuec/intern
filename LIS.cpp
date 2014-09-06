#include<iostream>
using namespace std;
int lis(int *a,int n){
	int m[n];
	for(int i=0;i<n;i++){
		m[i]=1;
	}
	for(int i=0;i<n;i++){
	for(int j=0;j<i;j++){
		if(a[j]<a[i]&&m[j]>=m[i])
		m[i]=m[j]+1;
	}	
	}
	int max=m[0];
	for(int i=1;i<n;i++)
	{
		if(max<m[i])
		max=m[i];
	}
	return max;
}
int main(){
	
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<lis(a,n);
}
