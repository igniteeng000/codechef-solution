#include<iostream>
#include <numeric>
using namespace std;
int main()
{
	int u;
	int i, j, total;
	cin>>u;
	while(u--)
	{int n, flag  = 0;
	int sum  = 0;
	cin>>n;
	int a[n];
		for (i = 0; i < n; i++)
			{
			cin>>a[i];
		  }

	 total = accumulate(a, a+n, sum);
		if (total%2 == 0)
		{
			cout<<"NO"<<endl;
		}else
		{
			cout<<"YES"<<endl;
		}
	}
}
