#include<iostream>
using namespace  std;
int partition(int *a,int left,int right){
	int pivot=left;
	int l=left+1;
	int r=right;
	while(1){
		while(a[l]<a[pivot]){
			l++;
		}
		while(a[r]>=a[pivot]&& l<=r){
			r--;
		}
		if(l>r) break;
		int temp=a[l];
		a[l]=a[r];
		a[r]=temp;
	}
	int temp=a[pivot];
		a[pivot]=a[r];
		a[r]=temp;
		return r;
}
void quicksort(int *a,int left,int right){
	if(left>right) return ;
	int pivot=partition(a,left,right);
	quicksort(a,left,pivot-1);
	quicksort(a,pivot+1,right);
}
int main(){
	int s[5]={1,8,3,10,100};
	int e[5]={5,11,6,20,2008};
	int result[10],ones[10];
	quicksort(s,0,4);
	quicksort(e,0,4);
	int p=0,q=0;
	int i=0;
	for( i=0;i<10&&p<=4&&q<=4;i++){
		if(e[q]<=s[p]){
			result[i]=e[q];
			ones[i]=-1;
			q++;
		}
		
	else {
			result[i]=s[p];
			ones[i]=1;
			p++;
		}
	}
	while(q<5){
	result[i]=e[q];
	
	ones[i]=-1;
			q++;	
			i++;
	}
	while(p<5){
			result[i]=s[p];
			ones[i]=1;
			p++;
			i++;
	}
	int first=0,second=-1,count=1;
	for(int i=0;i<10;i++)
	cout<<ones[i]<<" ";
while(first<10){
		count=1;
		second++;
		while(count!=0){
		second++;
			count+=ones[second];
		}
		cout<<result[first]<<result[second]<<endl;
		//second++;
		first=second+1;
		
	}
	
}
