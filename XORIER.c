#include<stdio.h>
#include<stdlib.h>
int main()
{
	/*
		A xor B = sum of two prime numbers with same parity.
	*/
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int a[n];
		long long int max = 0;
		long long int od=0, ev=0, result=0;
		for(int i = 0; i < n; ++i)
		{
			scanf("%lld",&a[i]);
			if(a[i]>=max)
				max=a[i];
			if(a[i]%2==0)
				ev++;
			else
				od++;
		}
		long long int b[max+3];
		for (int i = 0; i<(max+3); ++i)
			b[i] = 0;
		for (int i = 0; i < n; ++i)
			b[a[i]] = b[a[i]] + 1;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]%2==0)
			{
				ev--;b[a[i]]--;
				result = result + ev - b[a[i]]-b[a[i]^2];
			}
			else
			{
				od--;b[a[i]]--;
				result = result + od - b[a[i]]-b[a[i]^2];
			}
		}
		printf("%lld\n",result);
	}
	return 0;
}
