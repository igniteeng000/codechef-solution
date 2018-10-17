#include<iostream>
#include<string>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n, target, count = 0;
		cin>>n>>target;
		int a[n], i;
		for(i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		for (i = 0; i < n; i++)
		{
			if(a[i]%target == 0)
			{
				count++;
			}
		}
		int ans = pow(2, count) - 1;
		cout<<ans<<endl;
      t--;
	}
	return 0;
}
