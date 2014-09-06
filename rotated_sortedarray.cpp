#include<iostream>
using namespace std;
int search(int *a,int left,int right,int data ){
	if(left>right)return -1;
int middle=left+(right-left)/2;
if(a[middle]==data)return middle;
if(a[left]<a[middle])
{
	if(data>a[middle]||data<a[left])search(a,middle+1,right,data);
	else search(a,left,middle-1,data);
}
else if(a[right]>=a[middle]){

	if(data<a[middle]||data>a[right])search(a,left,middle-1,data);
	else search(a,middle+1,right,data);
}}
int main(){
	int arr[10]={8,9,0,1,2,3,4,5,6,7};
	cout<<search(arr,0,9,0);
}
