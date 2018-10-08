#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll modulo(string st,ll a)
{
	ll ans=0;
	for(ll i=0;i<st.length();i++)
	{
		ll x=st[i]-'0';
		ans=(ans*10+x);
		ans=ans%a;
	}
	return ans;
}
ll gcd(ll a, ll b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		ll a;
		string b;
		cin>>a>>b;
		if(a==0)
		{
			cout<<b<<endl;
			continue;
		}
		ll ans=modulo(b,a);
		ll put=gcd(a,ans);
		cout<<put<<endl;
	}
	return 0;
}
