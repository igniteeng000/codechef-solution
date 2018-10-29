#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t;scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		int h[n];
		for(int i=0;i<n;i++)
			scanf("%d",&h[i]);
		int minsteps=0, te=k;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				if(h[i]>k)
				{
					int ntr=0;
					while(ntr<h[i])
					{
						ntr = ntr + k;
						minsteps++;
					}
					minsteps--;
				}
			}
			else
			{
				if(h[i]-h[i-1]>k)
				{
					int ntr = h[i-1];
					while(ntr<h[i])
					{
						ntr = ntr + k;
						minsteps++;
					}
					minsteps--;
				}
			}
		}
		printf("%d\n",minsteps );
	}
	return 0;
}