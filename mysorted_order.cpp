#include<iostream>
using namespace std;
bool compare(int *sorted,int n,int a,int b){
	int index1=-1,index2=-1;
		for(int i=0;i<n;i++){
		if(sorted[i]==a){
			index1=i;
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(sorted[i]==b){
			index2=i;
			break;
		}
	}
	if(index1==-1||index2==-1)return a<b;
	else return index1<index2;
}
int partition(int *a,int *sorted,int n,int left,int right){
	if(left>right) return right;
	int pivot=left;
	left++;
	while(left<=right){
		while(compare(sorted,n,a[left],a[pivot])){
			//cout<<left<<" ";
			left++;
		}
		cout<<endl;
		while(!compare(sorted,n,a[right],a[pivot])&&left<=right){
			//cout<<right<<" ";
			right--;
		}
		if(left<right){
			int temp=a[left];
			a[left]=a[right];
			a[right]=temp;
			left++;
			right--;
		}
		
	}
	
	int temp=a[right];
			a[right]=a[pivot];
			a[pivot]=temp;
			 for(int i=0;i<11;i++)
  	cout<<a[i];
  	cout<<endl;
			return right;
}
void quicksort(int *a,int *sorted,int n,int left,int right){
	if(left>right) return;
	else{
	int i=partition(a,sorted,n,left,right);
	quicksort(a,sorted,n,left,i-1);
	quicksort(a,sorted,n,i+1,right);
	}
}
int main(){
	 int a[11]={2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
	 int sorted[4]={2, 1, 8, 3};
	 //cout<<compare(sorted,0,8,5);
  //partition(a,sorted,2,0,5);
  quicksort(a,sorted,4,0,10);
  for(int i=0;i<11;i++){
  	cout<<a[i];
  }
}
