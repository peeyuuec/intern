#include<iostream>
using namespace std;
void swaps(int *a,int n,int &count,int &nonzero){
	int left=0;
	int right=n-1;
	while(left<right){
		while(a[left]!=0){
			left++;
		}
		while(a[right]==0&&left<right){
			right--;
		}
		if(left<right){
			int temp=a[left];
			a[left]=a[right];
			a[right]=temp;
			count++;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!=0) nonzero++;
	}
	
	
}
int main(){
  int a[6]={1,0,0,-6,2,0};
  int count=0,nonzero=0;
  swaps(a,6,count,nonzero);
  for(int i=0;i<6;i++){
  	cout<<a[i];
  }
  cout<<endl<<count<<endl<<nonzero;
}
