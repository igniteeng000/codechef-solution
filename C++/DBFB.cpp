#include <bits/stdc++.h>
using namespace std;
#define mk make_pair
#define loop(i,x,n) for(ll i=x;i<n;i++)
#define sf scanf
#define pf printf
#define pb push_back
#define ll long long int
#define PII pair<ll,ll>
#define mod 1000000007
int main()
{
    int t,n,m;
    sf("%d",&t);
    PII p[100000];
    p[0]=mk(1,0);
    p[1]=mk(0,1);
    loop(i,2,100000)
    p[i]=mk((p[i-1].first+p[i-2].first)%mod,(p[i-1].second+p[i-2].second)%mod);
   // cout<<p[99999].first<<" "<<p[99999].second<<endl;
    while(t--)
    {
        sf("%d%d",&m,&n);
        ll ans=0,temp;
       // cout<<p[n-1].first<<endl;
        loop(i,0,m)
        sf("%lld",&temp),
        ans=(ans+((p[n-1].first*m)%mod*temp)%mod)%mod;
     //   cout<<ans<<endl;
        loop(i,0,m)
        sf("%lld",&temp),
        ans=(ans+((p[n-1].second*m)%mod*temp)%mod)%mod;
        pf("%lld\n",ans);
    }
    return 0;
}
