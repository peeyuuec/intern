#include<iostream>
using namespace std;
int maxsum(int *a,int left,int right){
	if(left==right) return a[left]>0?a[left]:0;
	int mid=left+(right-left)/2;
	int leftmax,rightmax,leftmid=0,rightmid=0,leftmidmax=0,rightmidmax=0;
	leftmax=maxsum(a,left,mid);
	rightmax=maxsum(a,mid+1,right);
	for(int i=mid;i>=left;i--){
		leftmid+=a[i];
		if(leftmid>leftmidmax)
		leftmidmax=leftmid;
	}
	for(int i=mid+1;i<=right;i++){
		rightmid+=a[i];
		if(rightmid>rightmidmax)
		rightmidmax=rightmid;
	}
	int m=leftmax>rightmax?leftmax:rightmax;
	return m>(rightmidmax+leftmidmax)?m:(rightmidmax+leftmidmax);
}
int main(){
	int n=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
cout<<	maxsum(a,0,n-1);
	return 0;
}
