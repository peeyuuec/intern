#include<iostream>
using namespace std;
int main(){
	int a[5]={1,1,2,3,4};
	int xora=0,xorn=0;
	for(int i=0;i<5;i++)
	xora=xora^a[i];
		for(int i=1;i<6;i++)
	xora=xorn^i;
	int num=xora^xorn;
	cout<<num;
}
