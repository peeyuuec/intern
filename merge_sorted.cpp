#include<iostream>
using namespace std;
int merge_sorted(int a[],int b[],int p,int m){
	int j=p-m-1,k=m-1;
	for(int i=p-1;i>=0;i--){
		if(a[j]>=b[k]){
		a[i]=a[j];j--;
	}
	else {
		a[i]=b[k];k--;
	}
	}
}
int main()
{
	int a[8],b[3];
	a[0]=1;	a[1]=2;	a[2]=4;	a[3]=6;	a[4]=7;	a[5]=0;	a[6]=0;	a[7]=0;
	b[0]=1;b[1]=3,b[2]=5;
	merge_sorted(a,b,8,3);
	for(int i=0;i<8;i++)
	cout<<a[i];
}
