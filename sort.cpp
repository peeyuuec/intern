#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<map>
using namespace std;
int compare(int a,int b){
	return a<b;
}
int compare2(const void *a,const void *b){
	return *(int* )a-*(int *)b;
}
int main(){
	int n=6;
	int m=5;
if(n==1 || m==1) {
      cout<<(n+m-1) ; 
   }
   else if((n%2)&&(m%2)) {
    cout<<(n*m);
   }
   else if(m%2) {
	cout<<(n*2);
           }
   else {
	cout<<((n*m)-((n-2)*(m-2)));
    
   }
}
