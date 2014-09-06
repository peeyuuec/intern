#include<iostream>
using namespace std;
struct pairr{
	int first,second;
};
int longest_sub_pairs(struct pairr p[],int n){
	int m[n];
	for(int i=0;i<n;i++)
	m[i]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(p[j].second<p[i].first&& m[j]>=m[i]){
				m[i]=m[j]+1;
			}
		}
	}
	return m[n-1];
	
}
int main(){
	int n=5;
	pairr p[5];
	p[0].first=1;
	p[0].second=2;
		p[1].first=3;
	p[1].second=4;
		p[2].first=1;
	p[2].second=6;
		p[3].first=2;
	p[3].second=7;
		p[4].first=9;
	p[4].second=10;
	cout<<longest_sub_pairs(p,5);

}
