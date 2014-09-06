#include<iostream>
using namespace std;
int makepartition(int *a,int sum,int n,int *ele,int &index){
	int s[n+1][sum+1];
	for(int i=0;i<=n;i++)
	s[i][0]=1;
	for(int i=1;i<=sum;i++)
	s[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=sum;j++){
			if(a[i]<j){
				if(s[i-1][j]<s[i-1][j-a[i]]){
					s[i][j]=s[i-1][j-a[i]];
					ele[index++]=a[i];
					
				}
				else{
					s[i][j]=s[i-1][j];
				}
			}
		}
	}
	return s[n][sum];
}
int main(){
	int index=0;
	int a[10]={1,3,2,4,3,2,4,1,5,3},ele[10];
	int sum=0;
	for(int i=0;i<10;i++)
	sum+=a[i];
	if(sum%2!=0) {
	cout<<"not possible";
	return 0;}
	if(makepartition(a,sum/2,10,ele,index)){
		cout<<"possible";
	}
	else {cout<<"not possible";
	}
	for(int i=0;i<index;i++){
		cout<<ele[i]<<" ";
	}
}
