#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
    	int n;
    	cin >> n;
    	ll arrXor = 0;
    	for(int i = 0 ; i < n ; i++)
    	{
    		ll num;
    		cin >> num;
    		arrXor ^= (2*num);
    	}
    	cout << arrXor << endl;
    }
    return 0;
}
