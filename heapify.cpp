#include<iostream>
#include<climits>
using namespace std;
int heapify(int *a,int size,int index){
	int child1=INT_MIN,child2=INT_MIN;
	if(2*index+1<=size)
	 child1=a[2*index+1];
	if(2*index+2<=size)
		child2=a[2*index+2];
		if(child1>=child2){
			if(a[index]<child1){
				int temp=a[index];
				a[index]=child1;
				a[2*index+1]=temp;
				heapify(a,size,2*index+1);
			}
		}
		else 	if(child2>child1){
			if(a[index]<child2){
				int temp=a[index];
				a[index]=child2;
				a[2*index+2]=temp;
				heapify(a,size,2*index+2);
			}
		}
}
int main(){
	int arr[7]={9,8,11,4,3,10,2};	
	heapify(arr,7,0);
	for(int i=0;i<7;i++){
	cout<<arr[i];}
	
}
