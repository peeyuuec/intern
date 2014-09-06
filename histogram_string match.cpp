#include<iostream>
#include<cstring>
using namespace std;
int ismatch(char *aux1,char *aux2){
	for(int i=0;i<256;i++)
	if(aux1[i]!=aux2[i]) return 0;
	return 1;
}
int main(){
	char str[1000],ptn[1000];
	cin>>str>>ptn;
	cout<<str<<endl<<ptn;
	char aux1[256]={0},aux2[256]={0};
		
		for(int  i=0;i<strlen(ptn);i++){
		aux2[(int)ptn[i]]++;
	}

	for( int i=0;i<strlen(ptn);i++){
		aux1[(int)str[i]]++;
	}
	
	if(strlen(str)<strlen(ptn)) {
    cout<<-1 ;return 0;	}
    if(ismatch(aux1,aux2))cout<<0;
    int i;
    int size=strlen(ptn);
	for( i=size;i<strlen(str);i++){
		aux2[(int)str[i-size]]--;
		aux2[(int)str[i]]++;
		if(ismatch(aux1,aux2)) cout<<i-size+1;
	}
	return 0;
}
