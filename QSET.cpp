#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[100005],tree[400015][3],lazy[400015];
void build(ll n,ll s,ll e){
	if(s==e){
		tree[n][a[s]%3]++;
		return;
	}
	ll mid=(s+e)/2;
	build(2*n,s,mid);
	build(2*n+1,mid+1,e);
	for(int i=0;i<3;i++){
		tree[n][i]=tree[2*n][i]+tree[2*n+1][i];
	}
}
void update(ll n,ll s,ll e,ll l,ll r,ll x){
	if(lazy[n]%3!=0){
		if(lazy[n]%3==1){
			ll aa=tree[n][0];
			ll bb=tree[n][1];
			ll cc=tree[n][2];
			tree[n][0]=cc;
			tree[n][1]=aa;
			tree[n][2]=bb;
		}
		else if(lazy[n]%3==2){
			ll aa=tree[n][0];
			ll bb=tree[n][1];
			ll cc=tree[n][2];
			tree[n][0]=bb;
			tree[n][1]=cc;
			tree[n][2]=aa;
		}
		if(s!=e){
			lazy[2*n]=(lazy[2*n]%3+lazy[n]%3)%3;
			lazy[2*n+1]=(lazy[2*n+1]%3+lazy[n]%3)%3;
		}
		lazy[n]=0;
	}
	if(s>e || s>r || e<l)return;
	if(s>=l && e<=r){
		x%=3;
		if(x==1){
			ll aa=tree[n][0];
			ll bb=tree[n][1];
			ll cc=tree[n][2];
			tree[n][0]=cc;
			tree[n][1]=aa;
			tree[n][2]=bb;
		}
		else if(x==2){
			ll aa=tree[n][0];
			ll bb=tree[n][1];
			ll cc=tree[n][2];
			tree[n][0]=bb;
			tree[n][1]=cc;
			tree[n][2]=aa;
		}
		if(s!=e){
			lazy[2*n]=(lazy[2*n]%3+x%3)%3;
			lazy[2*n+1]=(lazy[2*n+1]%3+x%3)%3;
		}
		return;
	}
	ll mid=s+(e-s)/2;
	update(2*n,s,mid,l,r,x);
	update(2*n+1,mid+1,e,l,r,x);
	for(ll i=0;i<3;++i)
     tree[n][i]=tree[2*n][i]+tree[2*n+1][i];
}
ll query(ll n,ll s,ll e,ll l,ll r,ll c){
	if(lazy[n]%3!=0){
		if(lazy[n]%3==1){
			ll aa=tree[n][0];
			ll bb=tree[n][1];
			ll cc=tree[n][2];
			tree[n][0]=cc;
			tree[n][1]=aa;
			tree[n][2]=bb;
		}
		else if(lazy[n]%3==2){
			ll aa=tree[n][0];
			ll bb=tree[n][1];
			ll cc=tree[n][2];
			tree[n][0]=bb;
			tree[n][1]=cc;
			tree[n][2]=aa;
		}
		if(s!=e){
			lazy[2*n]=(lazy[2*n]%3+lazy[n]%3)%3;
			lazy[2*n+1]=(lazy[2*n+1]%3+lazy[n]%3)%3;
		}
		lazy[n]=0;
	}
	if(s>e || s>r || e<l)return 0;
	if(s>=l && e<=r)return tree[n][c];
	ll mid=(s+e)/2;
	return query(2*n,s,mid,l,r,c)+query(2*n+1,mid+1,e,l,r,c); 
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,m;
	cin>>n>>m;
	string s;
	cin>>s;
	for(ll i=1;i<=n;i++){
		a[i]=(s[i-1]-'0')%3;
	}
	ll b[n+1];
	for(int i=1;i<=n;i++){
		b[i]=a[i];
		a[i]+=a[i-1];
		a[i]%=3;
	}
	build(1,1,n);
	while(m--){
		int c;
		cin>>c;
		if(c==1){
			ll x,y;
			cin>>x>>y;
			y%=3;
			ll r=b[x];
			b[x]=y;
			ll w=(y-r%3+3)%3;
			update(1,1,n,x,n,w);
		}
		else if(c==2){
			ll l,r;
			cin>>l>>r;
			ll ans=0;
			if(l==1){
				ll s0=query(1,1,n,l,r,0);
				ll s1=query(1,1,n,l,r,1);
				ll s2=query(1,1,n,l,r,2);
				s0++;
				ans+=(s0*(s0-1))/2;
				ans+=(s1*(s1-1))/2;
				ans+=(s2*(s2-1))/2;
				cout<<ans<<endl;
				continue;
			}
			else{
				l--;
				ll s0=query(1,1,n,l,r,0);
				ll s1=query(1,1,n,l,r,1);
				ll s2=query(1,1,n,l,r,2);
				ans+=(s0*(s0-1))/2;
				ans+=(s1*(s1-1))/2;
				ans+=(s2*(s2-1))/2;
				cout<<ans<<endl;
			}
			
		}
	}
	return 0;
}