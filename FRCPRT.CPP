#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string s[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>s[i];
		}
		string r;
		cin>>r;
		if(r[0]=='L' || r[0]=='R')
		{
			string f[n];
			for(int i=0;i<n;i++)
			{
				f[i]="";
				int p=m;
				for(int j=0;j<m;j++)
				{
					if(s[i][j]=='1')f[i]+='1',p--;
				}
				while(p--)f[i]+='0';
				s[i]=f[i];
			}
			//cout<<s[0]<<endl<<s[1]<<endl<<s[2]<<endl<<s[3]<<endl;
			int z=r.size();
			bool is=false;
			int x;
			for(int i=z-1;i>=0;i--)
			{
				if(r[i]=='U' || r[i]=='D')
				{
					is=true;
					x=i;
					break;
				}
			}
			if(is && r[x]=='U')
			{
				int a[m]={0};
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<m;j++)
					{
						if(s[i][j]=='1')a[j]++;
					}
				}
				for(int i=0;i<n;i++)
				{
					s[i]="";
					for(int j=0;j<m;j++)
					{
						if(a[j]>0)s[i]+='1',a[j]--;
						else s[i]+='0';
					}
				}
			}
			else if(is)
			{
				int a[m]={0};
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<m;j++)
					{
						if(s[i][j]=='0')a[j]++;
					}
				}
				for(int i=0;i<n;i++)
				{
					s[i]="";
					for(int j=0;j<m;j++)
					{
						if(a[j]>0)s[i]+='0',a[j]--;
						else s[i]+='1';
					}
				}
			}
			int v=r.size();
			v--;
			while(v>=0)
			{
				if(r[v]=='L' || r[v]=='R')
					break;
				v--;
			}
			if(r[v]=='L')
			{
				for(int i=0;i<n;i++)cout<<s[i]<<endl;
			}
			else if(r[v]=='R')
			{
				for(int i=0;i<n;i++)
				{
					reverse(s[i].begin(),s[i].end());
					cout<<s[i]<<endl;
				}
			}
		}
		else
		{
			int v=r.size();
			v--;
			while(v>=0)
			{
				if(r[v]=='U' || r[v]=='D')
					break;
				v--;
			}
			char ch,ch1;
			if(r[v]=='U')ch='1',ch1='0';
			else ch='0',ch1='1';
			int a[m]={0};
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(s[i][j]==ch)a[j]++;
				}
			}
			//cout<<a[0]<<a[1]<<a[2]<<a[3]<<endl;
			for(int i=0;i<n;i++)
			{
				s[i]="";
				for(int j=0;j<m;j++)
				{
					if(a[j]>0)s[i]+=ch,a[j]--;
					else s[i]+=ch1;
					//cout<<a[j]<<" ";
				}
				//cout<<endl;
			}
			//cout<<s[0]<<endl<<s[1]<<endl<<s[2]<<endl<<s[3]<<endl;
			v=r.size();
			v--;
			bool is=false;
			while(v>=0)
			{
				if(r[v]=='L' || r[v]=='R')
				{
					is=true;
					break;
				}
				v--;
			}
			if(is)
			{
				if(r[v]=='R')ch='0',ch1='1';
				else ch='1',ch1='0';
				for(int i=0;i<n;i++)
				{
					int gh=0;
					for(int j=0;j<m;j++)
					{
						if(s[i][j]==ch)gh++;
					}
					int f=m-gh;
					s[i]="";
					//cout<<gh<<" "<<f<<endl;
					while(gh--)s[i]+=ch;
					while(f--)s[i]+=ch1;
				}
			}
			for (int i = 0; i < n; ++i)
			{
				/* code */
				cout<<s[i]<<endl;
			}
		}
	}
	return 0;
}
