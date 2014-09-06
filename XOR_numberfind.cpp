#include<iostream>
using namespace std;
int main(){
	int a[6]={1,3,2,1,2};
	int ans=0;
	for(int i=0;i<5;i++){
		ans=ans^a[i];
	}
	cout<<ans;
}
