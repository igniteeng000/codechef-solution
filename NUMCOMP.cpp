#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a, b,c, j = 0, k= 0;
		cin>>a>>b>>c;
		 j = abs(a);
		 k = abs(b);

		 if ( c%2 == 0)
		 {
		 	 if (j > k)
		 	 {
		       cout<<"1"<<endl;
			  }
			  else if (j < k)
			  {
			  	cout<<"2"<<endl;
			  }
			  else
			  {
			  	cout<<"0"<<endl;
			  }
		 }
		 else
		 {
		 	if (a>b)
		 	{
		 		cout<<"1"<<endl;
			 }
			 else if(a<b)
			 {
			 	cout<<"2"<<endl;
			 }
			 else
			 {
			 	cout<<"0"<<endl;
			 }
		 }
/*		long long i ;
		long long o;
     i = pow(j, c);
	o =   pow(k, c);
	// cout<<i<<" "<< o << endl;
		if (i > o)
		{
			cout<<"1"<<endl;
		}
		else if(i < o)
		{
			cout<<"2"<<endl;
		}
		else if(i==o)
		{
			cout<<"0"<<endl;
		} */
	}
}
