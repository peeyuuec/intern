#include<iostream>
using namespace std;
int main()
{
	int m,p,w[100],sum = 0,mover[15];//mover[15] weight by each mover
	cin>>m>>p;
	for(int i=0;i<p;i++)
	{
		cin>>w[i];
		sum+=w[i];
	}
	int avg=sum/m;
	int weight=0,no=0;
	int j;
	for(j=0;j<p;j++)
	{
		weight+=w[j];
		if(weight >= avg)
		{
			int diffw = weight-avg;  //  >=0
			int diffo = weight-w[j]-avg;
			if(diffo <diffw  && diffo>=0)
			{
				j--;
				mover[no++]=weight-w[j];
			}
			else
			mover[no++]=weight;
			
			if(no==m-1)
			break;
			weight =0;  //resetting
		}
	}
	weight=0;
	
	for(int i=j;i<p;i++)
	weight+=w[i];
	
	mover[no]=weight;
	
	int max=0;
	for(int i=0;i<m;i++)
	{
		if(max<mover[i])
		max=mover[i];
	}
	cout<<max;
	return 0;
}

