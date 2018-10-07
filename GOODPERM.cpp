#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
typedef long long int ll;

int goodPerm(int arr[], int mask, int n, int k)
{
	if(mask == (1 << n)-1)
	{
		int places = 0;
		for(int i = 1; i < n; ++i)
			if(arr[i] > arr[i-1])
				places++;
		if(places == k)
			return 1;
		return 0;
	}
	int ans = 0;
	for(int i = 0; i < n; ++i)
	{
		if(arr[i] == 0)
		{
			for(int j = 1; j <= n; ++j)
			{
				if((mask & (1 << (j-1))) == 0)
				{
					arr[i] = j;
					ans += goodPerm(arr,mask|(1 << (j-1)),n,k);
					arr[i] = 0;
				}
			}
			break;
		}
	}
	return ans;

}

int main()
{
    #ifndef ONLINE_JUDGE
    clock_t start_s = clock();
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
    	int n,k;
    	cin >> n >> k;
    	int arr[n], mask = 0;
    	for(int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if(arr[i] != 0)
    			mask |= (1 << (arr[i]-1));
    	}
    	cout << goodPerm(arr,mask,n,k) << endl;
    }
    #ifndef ONLINE_JUDGE
    clock_t stop_s = clock();
    cout << "Time Elapsed: " << ((stop_s-start_s)/double(CLOCKS_PER_SEC))*1000 << " ms" << endl;
    #endif
    return 0;
}
