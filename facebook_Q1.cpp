#include<iostream>
using namespace std;
int a[5][4]={{1,1,1,1},{1,0,4,3},{1,1,2,1},{1,1,1,1},{1,1,1,1}};
void f(int row,int column,int r,int c,int i){
	if(row>r-1||row<0||column>c-1||column<0) return;
	int temp=a[row][column];
	a[row][column]=i;
	cout<<row<<column<<a[row][column]<<endl;
	if(a[row-1][column]==temp) f(row-1,column,r,c,i);
	if(a[row-1][column+1]==temp) f(row-1,column+1,r,c,i);
	if(a[row+1][column]==temp) f(row+1,column,r,c,i);
	if(a[row+1][column-1]==temp) f(row+1,column-1,r,c,i);
	if(a[row][column-1]==temp) f(row,column-1,r,c,i);
	if(a[row][column+1]==temp) f(row,column+1,r,c,i);
	if(a[row+1][column+1]==temp) f(row+1,column+1,r,c,i);
	if(a[row-1][column-1]==temp) f(row-1,column-1,r,c,i);
}
int main(){
	int r=5,c=4;
	
	f(2,0,5,4,2);
	for(int i=0;i<5;i++){
		for(int j=0;j<4;j++)
		{
		cout<<a[i][j];
	
	}	cout<<endl;
}}
