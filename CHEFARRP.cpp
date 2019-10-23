#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b))

#ifdef ONLINE_JUDGE
#define MAX 200005
#else
#define MAX 100000
#endif

int a[MAX],b[MAX];
char s[MAX],r[MAX];
int test;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	#endif
	
	int t,n,m,k,l,x,y,z,flag,count,d,mx,mn;
	long long int sum,prod;

	scanf("%d",&test);

	while(test--){
	
		scanf("%d",&n);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
			
		count=n;
		for(int i=0;i<n;i++){
			sum=prod=a[i];
			for(int j=i+1;j<n;j++){
				sum+=a[j];
				prod*=a[j];
				
				if(sum==prod)
					count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
