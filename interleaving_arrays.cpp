#include<iostream>
#include<cstring>
using namespace std;
void join(char *arr1,char *arr2,int depth1,int depth2,char *temp,int current){
	
	int length1=strlen(arr1);
	int length2=strlen(arr2);
	if(length1+length2!=0){
		if(current==length1+length2){
			cout<<temp<<endl;
		}
		else{
			if(depth1<length1){
				temp[current]=arr1[depth1];
				temp[current+1]='\0';
				join(arr1,arr2,depth1+1,depth2,temp,current+1);
			}
			if(depth2<length2){
				temp[current]=arr2[depth2];
				temp[current+1]='\0';
				join(arr1,arr2,depth1,depth2+1,temp,current+1);
			}
		}
	}
	else cout<<"Empty array not allowed"<<endl;
}
int main(){
	char arr1[100],arr2[100],temp[100];
	cin>>arr1>>arr2;
	join(arr1,arr2,0,0,temp,0);
	return 0;
}
