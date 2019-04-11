#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 bool prime[202];


void isprime(ll n)
{ memset(prime,true,sizeof(prime));
  prime[0]=false;
  prime[1]=false;
    for(ll i=2;i*i<=n;i++)
    {
        if(prime[i]==true)
        {
            for(ll p=i*2;p<=n;p+=i)
                prime[p]=false;
        }
    }
}
bool primefactor(ll j)
{ll flag1=0,i;
    for( i=1;i*i<=j;i++)
    {

        if((j%i==0)&&((j/i)!=i))
        {

            if(prime[i]&&prime[(j/i)])
                {
                    flag1=1;
                    break;
                }
        }

    }
    if(flag1==1)
    {

         return true;
    }

    else
        return false;

}
int main()
{ios_base::sync_with_stdio(false);
cin.tie(NULL);

    ll t;
    cin>>t;
    isprime(201);
    while(t--)
    {

        ll n,j;
        cin>>n;
        ll flag=0;

        for(j=2;j<=n/2;j++)
        {
            if(primefactor(j)&&primefactor(n-j))
            {

                    flag=1;
                }

        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO"<<endl;


    }
    return 0;
}
