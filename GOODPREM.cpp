#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
typedef long long int ll;
int k;ll ans;
 	map<int,int> m;
 	int b[100];


void check1(int a[],int n)
{ int flag=0; 
 for(int i=0;i<n;i++)
	{
		if(b[i]==0)
			continue;
		else if(b[i]!=a[i])
		{
			flag=1;
			break;
		}
	}
	int c=0;
	if(flag==0){
	for(int i=0;i<n;i++)
	{  //cout<<a[i]<<"  ";
		if(a[i]>a[i-1])
			c++;
	}
	//cout<<endl;
	if(c==k)
		ans++;
}
}



void heapPermutation(int a[], int size, int n)
{
    if (size == 1)
    {   
       check1(a,n);
        return;
    }
 
    for (int i=0; i<size; i++)
    {
        heapPermutation(a,size-1,n);
        if (size%2==1)
        	{//cout<<a[0]<<a[size-1]<<"dawda"<<endl;  
        	 //if(m[a[0]]!=1&&m[a[size-1]]!=1)
            swap(a[0], a[size-1]);
        }
        else //if(m[a[i]]!=1&&m[a[size-1]]!=1&&size%2==0)
            swap(a[i], a[size-1]);
    }
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {//ll ans=0;
   	int n;
   	cin>>n>>k;
   	int a[n];
    map<int,int>myp;
   	for(int i=0;i<n;i++)
   	{
   		cin>>a[i];
   		b[i]=a[i];
   		m[a[i]]++;
   		myp[a[i]]=1;

   	}
   	int flag=0;
   	for(int i=1;i<=n;i++)
   	{
      if(m[i]>1)
      {
      	flag=1;
      	break;
      }
   	}
   	if(flag==1)
   		cout<<0<<endl;
   	else 
   	{  for(int i=0;i<n;i++)
   		{
   			if(a[i]==0)
   			{ // cout<<i<<endl;
   				for(int j=1;j<=n;j++)
   				{
   					if(myp[j]==0)
   						{ // cout<<j<<endl;
   							a[i]=j;
   							myp[j]=1;
   							break;
   						}
   				}
   			}
   		}
   		ans=0;
   		heapPermutation(a, n, n);
   			cout<<ans<<endl;
   			m.clear();
   	}
   
   }
    
}