#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define pb push_back
#define mp make_pair
#define pi pair<ll,ll>
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define M 1000000007
#define Fast  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve2(string p, string q){
    ll m = p.length();
    ll n = q.length();
    ll dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(ll i = 1;i<=m;i++){
        if(p[i-1] == '0'){
            dp[0][i] = 0;
        }
        else dp[0][i] = 1;
    }
    for(ll i = 1;i<=n;i++){
        if(q[i-1] == '0'){
            dp[i][0] = 0;
        }
        else dp[i][0] = 1;
    }
    for(ll i = 1;i<=n;i++){
        for(ll j = 1;j<=m;j++){
            dp[i][j] = !(dp[i-1][j] && dp[i][j-1]);
        }
    }
    ll qq;
    cin>>qq;
    while(qq--){
        ll x,y;
        cin>>x>>y;
        cout<<dp[x][y];
    }
}
void solve(){
    string p,q;
    cin>>p>>q;
    ll m = p.length();
    ll n = q.length();
    if(n*m < 1000001){
        solve2(p,q);
        return;
    }
    // cout<<"Hi";
    ll r[m+1];
    memset(r,0,sizeof(r));
    for(ll i = 1;i<m+1;i++){
        r[i] = p[i-1]-'0';
    }
    ll c[n+1];
    memset(c,0,sizeof(c));
    for(ll i = 1;i<n+1;i++){
        c[i] = q[i-1]-'0';
    }
    ll row[3][m+1];
    memset(row,0,sizeof(row));
    for(ll i = 0;i<3;i++){
        for(ll j = 0;j<m+1;j++){
            if(i == 0 && j == 0) continue;
            if(i == 0){
                row[i][j] = p[j-1]-'0';
            }
            else if(j == 0){
                row[i][j] = q[i-1]-'0';
            }
            else{
                row[i][j] = !(row[i-1][j] && row[i][j-1]);
            }
        }
    }
    ll col[n+1][3];
    memset(col,0,sizeof(col));
    for(ll i = 0;i<n+1;i++){
        for(ll j = 0;j<3;j++){
            if(i == 0 && j == 0) continue;
            if(i == 0){
                col[i][j] = p[j-1]-'0';
            }
            else if(j == 0){
                col[i][j] = q[i-1]-'0';
            }
            else{
                col[i][j] = !(col[i-1][j] && col[i][j-1]);
            }
        }
    }
    // for(ll i = 0;i<=2;i++){
    //     for(ll j = 0;j<=m;j++){
    //         cout<<row[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";
    // for(ll i = 1;i<n+1;i++){
    //     for(ll j = 1;j<3;j++){
    //         cout<<col[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";
    ll qq;
    cin>>qq;
    while(qq--){
        ll x,y;
        cin>>x>>y;
        if(x <= y){
            ll pos = y - x + 1;
            if(x <= 2){
                cout<<row[x][y];
            }
            else if(row[1][pos] == 0 || row[2][pos+1] == 0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        else{
            ll pos = x - y + 1;
            if(y<=2){
                cout<<col[x][y];
            }
            else if(col[pos][1] == 0 || col[pos+1][2] == 0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
    }
}

int main(){
    Fast
    ll t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }
    return 0;
}
