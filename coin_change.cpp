#include<iostream>
#include<climits>
using namespace std;
int change(int *d,int M,int n){
	int c[M+1];
	c[0]=0;
	for(int i=1;i<M+1;i++){
		int min_cost=INT_MAX-1;
		
		for(int j=1;j<n;j++){
			if(d[j]<=i)
			min_cost=(min_cost<(1+c[i-d[j]]))?min_cost:(1+c[i-d[j]]);
			
		}
		
		c[i]=min_cost;
	}
	return c[M];
}
int main(){
	
int M,n;
cin>>M>>n;
int dino[n];
for(int i=0;i<n;i++)
cin>>dino[i];
cout<<change(dino,M,n);
}
