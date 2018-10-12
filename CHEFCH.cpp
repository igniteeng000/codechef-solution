#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define lli long long int 
#define ull unsigned long long
#define mod 1000000007
#define endl "\n"
#define GIO ios_base::sync_with_stdio(0);cin.tie(0);
 
int main()
{ GIO;
  ll T;
  cin>>T;
  while(T--)
  { string s;
    cin>>s;
    ll c1=0,c2=0;
    	for(ll i=0;i<s.length();i++)
    	{         if(i%2==0 && s[i]!='-') c1++;
    	          if(i%2!=0 && s[i]!='+') c1++;
    		
    	}
    
          for(ll i=0;i<s.length();i++)
    	{         if(i%2==0 && s[i]!='+') c2++;
    	          if(i%2!=0 && s[i]!='-') c2++;
    		
    	}	
    cout<<min(c1,c2)<<"\n";
    	     
  }
return 0;
}


