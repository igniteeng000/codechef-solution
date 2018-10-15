#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
char s1[21],s2[21];
long long dp[21][2][2][163],v[163];
long long solve(int i,int x,int c,int sum){
	if(sum<0)return 0;
	if(i==20){
		return (sum==0);
	}
	if(dp[i][x][c][sum]!=-1)return dp[i][x][c][sum];
	int g=0;
	int h=9;
	if(x==0)g=s1[i]-'0';
	if(c==0)h=s2[i]-'0';
	long long mx=0;
	for(int j=h;j>=g;j--)
	 {
	    mx+=solve(i+1,x|j>g,c|j<h,sum-j);
	    if(mx>=mod)mx-=mod;
	 }
	return dp[i][x][c][sum]=mx;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		memset(dp,-1,sizeof dp);
		sprintf(s1,"%020lld",a);
		sprintf(s2,"%020lld",b);
		for(int i=1;i<=162;i++){
			v[i]=solve(0,0,0,i)%mod;
		}
		long long ans=0;
		for(int i=1;i<=162;i++){
			for(int j=i+1;j<=162;j++){
				if(__gcd(i,j)==1){
					ans=(ans%mod+v[i]*v[j]%mod)%mod;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}