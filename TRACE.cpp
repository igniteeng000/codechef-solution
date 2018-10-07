#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
typedef long long int ll;

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
    	int n;
    	cin >> n;
    	int mat[n][n];
    	for(int i = 0 ; i < n ; ++i)
    		for(int j = 0 ; j < n ; ++j)
    			cin >> mat[i][j];
    	int maxS = INT_MIN;
    	for(int i = 0 ; i < n ; ++i)
    	{
    		int row = i, col = 0;
    		int tempS = 0;
    		while(row < n && col < n)
    		{
    			tempS += mat[row][col];
    			row++;
    			col++;
    		}
    		//cout << tempS << endl;
    		maxS = max(maxS,tempS);
    	}
    	for(int j = 0 ; j < n ; ++j)
    	{
    		int row = 0, col = j;
    		int tempS = 0;
    		while(row < n && col < n)
    		{
    			tempS += mat[row][col];
    			row++;
    			col++;
    		}
    		//cout << tempS << endl;
    		maxS = max(maxS,tempS);
    	}
    	cout << maxS << endl;
    }
    #ifndef ONLINE_JUDGE
    clock_t stop_s = clock();
    cout << "Time Elapsed: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << " sec" << endl;
    #endif
    return 0;
}
