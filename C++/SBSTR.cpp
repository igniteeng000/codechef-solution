#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define f first
#define s second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
typedef long long int ll;

int isInterest(int tempFreq[], int k)
{
	int distinct = 0;
	bool equal = true;
	int freq;
	for(int i = 0 ; i < 26 && equal ; ++i)
	{
		//cout << tempFreq[i] << " ";
		if(tempFreq[i] > 0)
		{
			distinct++;
			if(distinct == 1)
				freq = tempFreq[i];
			else
				equal &= (tempFreq[i] == freq);
		}
	}
	if(distinct >= k && equal)
		return 1;
	return 0;
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
    	string s;
    	int k;
    	cin >> s >> k;
    	int len = s.length();
    	int freq[len+1][26];
    	for(int j = 0 ; j < 26 ; ++j)
    		freq[0][j] = 0;
    	for(int i = 1 ; i <= len ; ++i)
    	{
    		for (int j = 0; j < 26; ++j)
    		{
    			if(j == s[i-1]-'a')
    				freq[i][j] = freq[i-1][j]+1;
    			else
    				freq[i][j] = freq[i-1][j];
    			//cout << freq[i][j] << " ";
    		}
    		//cout << endl;
    	}
    	int ans = 0;
    	for(int i = 0 ; i < len ; ++i)
    	{
    		for(int j = 1 ; j <= len-i ; ++j)
    		{
    			int tempFreq[26];
    			for(int l = 0 ; l < 26 ; l++)
    				tempFreq[l] = freq[i+j][l]-freq[i][l];
    			ans += isInterest(tempFreq,k);
    		}
    	}
    	cout << ans << endl;
    }
    #ifndef ONLINE_JUDGE
    clock_t stop_s = clock();
    cout << "Time Elapsed: " << (stop_s-start_s)/double(CLOCKS_PER_SEC) << " sec" << endl;
    #endif
    return 0;
}
