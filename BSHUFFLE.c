#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1 || n==2)
	{
		for (int i = 1; i <n; ++i)
		{
			printf("%d ",i);
		}
		printf("%d\n",n);
		for (int i = 1; i <n; ++i)
		{
			printf("%d ",i);
		}
		printf("%d\n",n);
	}
	else
	{
		int rt;
		if(n%2!=0)
			rt = (n/2)+1;
		else
			rt = n/2;
		// HIGH
		for (int i = 2; i <=rt; ++i)
		{
			/* code */
			printf("%d ",i);
		}
		printf("1 ");
		for (int i = rt+2; i <=n; ++i)
		{
			/* code */
			printf("%d ",i);
		}
		printf("%d\n",rt+1);

		// LOW
		printf("%d ", n);
		for (int i = 1; i < n-1; ++i)
		{
			printf("%d ", i);
		}
		printf("%d\n",n-1);
	}
	return 0;
}

