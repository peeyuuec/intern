#include<iostream>

using namespace std;
int main(){
	int n,m;
	cin>>n>>m;

	int wt[m],sum=0;
	for(int i=0;i<m;i++){
		cin>>wt[i];
		sum+=wt[i];
	}
	int mm=-1;
		if(n>m){
		for(int i=0;i<m;i++){
			if(mm<wt[i])mm=wt[i];
		}
		cout<<mm;
		return 0;
		
	}
	float avg= sum/(float)n;
	//cout << "avg" << avg;
	int max=-1;
	int ind = 1, i;
	for(i=0;i<m;i++){
		float w = 0;
		while(w<=avg && i<m){
			w+=(float)wt[i];
			i++;
		}
		i--;
		if(avg-(w-(float)wt[i])<w-avg){
			w = w - (float)wt[i];
			if(w>max) max=(int)w;
			i--;
		}
		else{
			if(w>max) max=(int)w;
		}
	    ind ++;
	    if(ind >= n){
	    	break;
	    }
	}
	
	i++;
	
	int w = 0;
	while(i < m){
		w += wt[i];
		i++;
		
	}
	
	if(w > max)
	  max = w;
	
	
	cout << max  << endl;
	
	return 0;
}
