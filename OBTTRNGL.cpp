#include <bits/stdc++.h>
using namespace std;

//important constants
#define pi M_PI
#define mod 1000000007
#define maX(a,b)		((a)>(b)?(a):(b))
#define miN(a,b)		((a)<(b)?(a):(b))

#ifdef ONLINE_JUDGE
#define MAX 2000005
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
	
	int t,n,m,k,l,z,flag,count,d,mx,mn,v1,v2,x,y;
	long long int sum,prod;

	scanf("%d",&test);

	while(test--){
	
		scanf("%d",&n);
		scanf("%d%d",&v1,&v2);
		x=abs(v2-v1)-1;
		y=n-2-x;
		if(x<y)
			printf("%d\n",x);
		else if(y<x)
			printf("%d\n",y);
		else
			printf("0\n");
	}
	return 0;
}
