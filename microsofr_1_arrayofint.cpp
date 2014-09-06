#include<iostream>
#include<map>
using namespace std;
int partition(int *a,int left,int right);
int quicksort(int *a,int left,int right){
if(left>=right)return 0;
int index=partition(a,left, right)	;
//cout<<"index"<<index<<left<<right<<endl;
//for(int i=0;i<8;i++)
//cout<<a[i];
quicksort(a,left,index-1);
quicksort(a,index+1,right);
}
int partition(int *a,int left,int right){
	int pivot=a[left];int data=left;
	int start=left;
	int end =right;
	while(start<end){
		while(a[start]<=pivot){
			start++;
		}
		while(a[end]>pivot){
			end--;
		}
		if(start<end){
		int temp=a[start];
		a[start]=a[end];
		a[end]=temp;	
		}
	}
	        int temp=a[end];
			a[end]=pivot;
			a[data]=temp;
			//cout<<end;
	return end;
}
int main(){
	map<int ,int> m;
int arr[8]={9,5,6,7,3,2,5,9};	
//partition(arr,0,7);
for(int i=0;i<8;i++){
	m[arr[i]]=0;
}
for(int i=0;i<8;i++){
	m[arr[i]]++;
}
int even[3];int j=0;
for(int i=0;i<8;i++){
	if(m[arr[i]]%2==0){
		even[j]=arr[i];
		j++;
	}
}
for(map<int,int> ::iterator ii=m.begin();ii!=m.end();++ii ){
	if(((*ii).second)%2==0)cout<<(*ii).first<<endl;
}
quicksort(arr,0,7);
for(int i=0;i<8;i++);
//cout<<arr[i]<<endl;
}
