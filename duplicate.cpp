//given no of element between 0-n-1
#include<iostream>
using namespace std;
int find_dupplicate(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]>=0){
		
		if(a[a[i]]<0) return true;
		else a[a[i]]=a[a[i]]*-1;}
		else {
			
		if((a[a[i]*-1]<0)) return true;
		else a[(a[i]*-1)]=a[a[i]*-1]*-1;
		}
	}
	return false;
}
int main(){
	int a[8];
	a[0]=1;	a[1]=2;	a[2]=4;	a[3]=3;	a[4]=7;	a[5]=2;	a[6]=5;	a[7]=0;
	cout<<find_dupplicate(a,8);
}
