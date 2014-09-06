#include<iostream>
using namespace std;
int hanoi(int size,int s,int d,int i){
	if(size==0) cout<<"move disks"<<size<<"from"<<s<<"to"<<d<<endl;
	else 
	{
		hanoi(size-1,s,i,d);
		cout<<"move disks"<<size<<"from"<<s<<"to"<<d<<endl;
		hanoi(size-1,i,d,s);
	}
}
int main(){
	hanoi(2,0,1,2);
	return 0;
}
