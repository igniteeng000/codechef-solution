#include<stdio.h>
int main()
{
	int i,j,n,k,t;
	scanf("%d",&t);
	int numer[t];
	int val[t][100],store[100];
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&n,&k);
		numer[i]=n;
		for(j=0;j<n;j++)
			scanf("%d",&store[j]);
		for(j=0;j<n;j++)
		{
			if(store[j]<=k)
			{
				k-=store[j];
				val[i][j]=1;
			}
			else
				val[i][j]=0;
		}
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<numer[i];j++)
		printf("%d",val[i][j]);
		printf("\n");
	}
	
}

