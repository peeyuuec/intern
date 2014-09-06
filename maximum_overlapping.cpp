#include<iostream>
using namespace std;
int partition(int *a,int left,int right){
	int pivot=left;
	left++;
	while(1){
		while(a[left]<a[pivot]){
			left++;
		}
		while(a[right]>=a[pivot]&&left<=right){
			right--;
		}
		if(left>right) break;
		int temp=a[left];
		a[left]=a[right];
		a[right]=temp;
		
	}
	
	
	int temp=a[right];
	a[right]=a[pivot];
	a[pivot]=temp;
	
	return right;
}
void quicksort(int *a,int left,int right){
	if(left>right) return;
	else {
		int pivot=partition(a,left,right);
		cout<<"*"<<pivot<<endl;
		
		quicksort(a,left,pivot-1);
		quicksort(a,pivot+1,right);
	}
}

int max_ele(int b[],int d[],int n){
	int array[2*n],aux[2*n];
	quicksort(b,0,n-1);
	quicksort(d,0,n-1);
	int p1=0,p2=0;
	for(int i=0;i<5;i++)
	cout<<b[i];
	cout<<endl;
	for(int i=0;i<5;i++)
	cout<<d[i];
	cout<<endl;
	for(int i=0;i<2*n;i++){
		if(b[p1]<d[p2]) {
			cout<<b[p1];
			array[i]=b[p1];
			aux[i]=1;
			p1++;
		}
		else{
			cout<<d[p2];
			array[i]=d[p2];
			aux[i]=-1;
			p2++;
		}
	}
	cout<<endl;
	for(int i=0;i<10;i++)
	cout<<array[i];
	cout<<endl;
}
int main(){
	int b[5]={5,3,0,5,7};
	int d[5]={7,8,3,9,9};
	
	//cout<<partition(a,0,4);
	max_ele(b,d,5);
	
}
