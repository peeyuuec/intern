//An array of n integers is there in which the range of elements is n, i.e., the difference between maximum and minimum number is n. Find the repeating numbers.
#include<iostream>
using namespace std;
int main(){
	int n=10;
	int a[10]={1,3,2,2,4,1,1,4,5,6};
	int arr[2*n+1];
	for(int i=0;i<2*n+1;i++){
		arr[i]=0;
	}
	for(int i=0;i<n;i++){
		arr[a[i]+n]++;
	}
	for(int i=0;i<2*n+1;i++){
		if(arr[i]>1){
			cout<<i-n<< " ";
		}
	}
return 0;	
}

