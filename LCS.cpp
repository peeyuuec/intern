#include<iostream>
#include<cstring>
using namespace std;
int LCS(char *a,char *b,int n,int m){
	int lcs[n+1][m+1];
	for(int i=0;i<=n;i++)
	lcs[i][0]=0;
	for(int i=0;i<=m;i++)
	lcs[0][i]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i-1]==b[j-1]){
			lcs[i][j]=1+lcs[i-1][j-1];
			cout<<i<<j<<lcs[i][j]<<endl;}
			else lcs[i][j]=(lcs[i-1][j]>lcs[i][j-1])?lcs[i-1][j]:lcs[i][j-1];
		}
	}
	return lcs[n][m];
}
int main(){

	char a[100],b[100];
	cin>>a>>b;
cout<<a<<b;
	cout<<LCS(a,b,strlen(a),strlen(b));
	return 0;
}
