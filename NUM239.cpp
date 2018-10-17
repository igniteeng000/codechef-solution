#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,l, r, i;
		cin>>l>>r;
		int count = 0;
		for (i = l; i <= r; i++)
		{
			if (i%10 == 2 || i%10 == 9 || i%10 == 3)
			{
				count++;
			}
		}
		cout<<count<<endl;



	}
}
