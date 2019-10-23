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
	
	int t,n,m,k,l,x,y,z,flag,count,d,mx,mn;
	long long int sum,prod;

	scanf("%d",&test);

	while(test--){
	
		for(int i=0;i<26;i++)
			scanf("%d",&a[i]);
		
		scanf("%s",s);
		n=strlen(s);
		sum=0;
		for(int i=0;i<n;i++)
			b[s[i]-'a']=1;

		for(int i=0;i<26;i++){
			if(!b[i])	sum+=a[i];
		}

		printf("%lld\n",sum);

		for(int i=0;i<26;i++)	b[i]=0;
	}
	return 0;
}
