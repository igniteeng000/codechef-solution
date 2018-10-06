#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
    	int n,k;
    	cin >> n >> k;
    	int motuSize = ceil(n/2.0), tomuSize = n/2;
    	int* motu = new int[motuSize];
    	int* tomu = new int[tomuSize];
    	int motuSum = 0, tomuSum = 0;
    	for(int i = 0 ; i < n ; i++)
    	{
    		if(i%2==0)
    		{
    			cin >> motu[i/2];
    			motuSum += motu[i/2];
    		}
    		else
    		{
    			cin >> tomu[i/2];
    			tomuSum += tomu[i/2];
    		}
    	}
    	/*for(int i = 0 ; i < motuSize ; i++)
    		cout << motu[i] << " ";
    	cout << endl;
    	for(int i = 0 ; i < tomuSize ; i++)
    		cout << tomu[i] << " ";
    	cout << endl;*/
    	sort(motu,motu+motuSize,greater<int>());
    	sort(tomu,tomu+tomuSize);
    	int i = 0;
    	while(k > 0 && motuSum >= tomuSum && i < tomuSize && motu[i] > tomu[i])
    	{
    		k--;
    		motuSum = motuSum - motu[i] + tomu[i];
    		tomuSum = tomuSum - tomu[i] + motu[i];
    		i++;
    	}
    	if(tomuSum > motuSum)
    		cout << "YES" << endl;
    	else
    		cout << "NO" << endl;
    	delete[] tomu;
    	delete[] motu;
    }
    return 0;
}