#include<iostream>
using namespace std;
float sqroot(float n){
	float x=n;
	float y=1;
	float e=.0000001;
	while(x-y>e){
		x=(x+y)/2;
		y=n/x;
	}
	return x;
}
int main(){
	cout<<sqroot(50);
}
