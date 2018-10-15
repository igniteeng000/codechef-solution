#include <bits/stdc++.h>
using namespace std;
#define ll int
const int mx=100005;
pair<ll,ll>tree[16*mx];
ll a[mx],b[mx];
vector<ll> xx[4*mx],yy[4*mx];
vector<ll> ans1[4*mx],ans2[4*mx];
int ans3[mx];
void build(int n,int s,int e){
	if(s==e){
		tree[n]={INT_MAX,INT_MAX};
		return ;
	}
	int mid=(s+e)/2;
	build(2*n,s,mid);
	build(2*n+1,mid+1,e);
	tree[n]=min(tree[2*n],tree[2*n+1]);
}
void update(int n,int s,int e,int p,pair<ll,ll>m){
	if(s==e){
		tree[n]=min(tree[n],m);
		return;
	}
	int mid=(s+e)/2;
	if(p<=mid){
		update(2*n,s,mid,p,m);
	}
	else{
		update(2*n+1,mid+1,e,p,m);
	}
	tree[n]=min(tree[2*n],tree[2*n+1]);
}
pair<ll,ll> query(int n,int s,int e,int l,int r){
	
	if(s==l && e==r)return tree[n];
	//if(s>e || e<l || s>r)return {INT_MAX,INT_MAX};
	int mid=(s+e)/2;
	if(r<=mid)return query(2*n,s,mid,l,r);
	else if(l>mid)return query(2*n+1,mid+1,e,l,r);
	else{
		pair<ll,ll> p=query(2*n,s,mid,l,mid);
		pair<ll,ll> q=query(2*n+1,mid+1,e,mid+1,r);
		return min(p,q);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m;
	cin>>n>>m;
	vector<ll> v;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		v.push_back(a[i]);
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
		v.push_back(b[i]);
	}
	int q=m;
	vector<pair<ll,ll> >w;
	while(m--){
		int x,y;
		cin>>x>>y;
		w.push_back({x,y});
		v.push_back(x);
		v.push_back(y);
	}
	sort(v.begin(),v.end());
	int sz=v.size();
	build(1,1,sz);
	for(int i=1;i<=n;i++){
		a[i]=lower_bound(v.begin(),v.end(),a[i])-v.begin()+1;
		b[i]=lower_bound(v.begin(),v.end(),b[i])-v.begin()+1;
		ans1[a[i]].push_back(b[i]);
		ans1[a[i]].push_back(i);
	}
	for(int i=1;i<=q;i++){
		w[i-1].first=lower_bound(v.begin(),v.end(),w[i-1].first)-v.begin()+1;
		w[i-1].second=lower_bound(v.begin(),v.end(),w[i-1].second)-v.begin()+1;
		ans2[w[i-1].first].push_back(w[i-1].second);
		ans2[w[i-1].first].push_back(i);
	}
	for(int i=sz;i>=1;i--){
		for(int j=0;j<ans1[i].size();j+=2){
			ll sum=v[ans1[i][j]-1]+v[i-1];
			int id=ans1[i][j+1];
			update(1,1,sz,ans1[i][j],{sum,id});
		}
		for(int j=0;j<ans2[i].size();j+=2){
			ll ss=ans2[i][j];
			int id=ans2[i][j+1];
			pair<ll,ll> p=query(1,1,sz,ss,sz);
			ans3[id]=p.second;
		}
	}
	for(int i=1;i<=q;i++){
		if(ans3[i]==INT_MAX)cout<<"-1\n";
		else cout<<ans3[i]<<endl;
	}
	return 0;
}