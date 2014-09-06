#include<iostream>
#include<cstring>
using namespace std;
int permutation(int size,char* str){
    if(size==strlen(str)){
		cout<<str<<endl;
		return 0;
	}
	else{
	
	char temp =str[size];
	char temp2 =str[size+1];
	//cout<<str<<strlen(str)<<str[size+1]<<endl;
	str[size]=temp2;
	str[size+1]=temp;
	permutation(size+1,str);
	 temp =str[size];
	str[size]=str[size+1];
	str[size+1]=temp;
	permutation(size+1,str);}
}
int main(){
	char str[1000];
	cin>>str;
	printf("%s\n",str);
    //printf("%c\n",*str);
	permutation(0,str);
	
}
