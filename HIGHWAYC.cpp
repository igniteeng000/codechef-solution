#include <bits/stdc++.h>
using namespace std;
#define f first
#define sec second
#define pdd pair<double,double>
#define mp make_pair
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--)
    {
    	int n;
    	double s,y;
    	cin >> n >> s >> y;
    	double velo[n], pos[n], len[n];
    	int dir[n];
    	for(int i = 0 ; i < n ; i++)
    		cin >> velo[i];
    	for(int i = 0 ; i < n ; i++)
    		cin >> dir[i];
    	for(int i = 0 ; i < n ; i++)
    		cin >> pos[i];
    	for(int i = 0 ; i < n ; i++)
    		cin >> len[i];
    	pdd inter[n];
    	double time = 0;
    	for(int i = 0 ; i < n ; i++)
    	{
    		if((pos[i] > 0 && dir[i] == 0) || pos[i] <= 0 && dir[i] == 1)
    		{
    			inter[i].f = (abs(pos[i])-0.000001)/velo[i];
    			inter[i].sec = (abs(pos[i])+len[i]+0.000001)/velo[i];
   			}
   			else
   			{
    			if(abs(pos[i]) > len[i])
    				inter[i] = mp(-1,-1);
    			else
    			{
   					inter[i].f = 0;
   					inter[i].sec = (len[i]-abs(pos[i])+0.000001)/velo[i];
   				}
    		}
    		if(time > inter[i].sec || time+y/s < inter[i].f)
    			time += y/s;
    		else
    			time = inter[i].sec + y/s;
    	}
    	cout << fixed << setprecision(6) << time << endl;
    }
    return 0;
}
