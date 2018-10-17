#include<iostream>
#include<algorithm>
using namespace std;
int main()

{
	int q;
	cin>>q;
	while (q--)
	{
		int ele = 0;
		cin>>ele;
		int i, a[ele], b[ele], c[ele];
		int j = 0;
		    j = ele-1;
		int flag = 0;
		int  temp = 0, count = 0;
		for (i = 0 ; i < ele; i++)
		{
			cin>>a[i];
			c[j] = a[i];
			j--;
		}
		for (i = 0; i < ele; i++)
		{
			cin>>b[i];
		}
		 for (i = 0; i < ele; i++)
		 {

	    if (a[i] <= b[i])
		{
			count++;
			if (c[i] <= b[i])
			{
			   flag++;
			}
		} else if (c[i] <= b[i])
		{
			flag++;
		}else
		{
			count++;
		}
	  }

		if (count == ele && flag == ele )
		{
			cout<<"both"<<endl;
		}
		else if (count == ele)
		{
			cout<<"front"<<endl;
		}
		else if (flag == ele )
		{
			cout<<"back"<<endl;
		}
		else
		{
			cout<<"none"<<endl;
		}
   }
   return 0;
}
