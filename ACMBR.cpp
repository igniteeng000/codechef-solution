#include <bits/stdc++.h>
using namespace std;
double dp[102][1003];
int sp[102][1003],n;
double solve(int i,int t){
	if(t==0)return i;
	if(i==0)return 0;
	if(sp[i][t]!=-1)return dp[i][t];
	sp[i][t]=1;
	double p=(double)i/(double)n;
	return dp[i][t]=p*solve(i-1,t-1)+(double)(1.0-p)*solve(i,t-1);
}
int main() {
	int t;
	cin>>t;
	while(t--){
	int p;
	cin>>n>>p;
	memset(sp,-1,sizeof sp);
	printf("%.6f\n",solve(n,p));
	}
	return 0;
}