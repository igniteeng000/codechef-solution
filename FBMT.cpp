#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n;
  scanf("%d",&t);
  while(t--)
  {
   scanf("%d",&n);
   string a="",b="";
   string c[n];
   int flag=0;
   if(n==0)
   {
        printf("Draw\n");
   continue;
   }
   cin>>c[0];
   a=c[0];
   for(int i=1;i<n;i++)
        {cin>>c[i];
        if(c[i]!=a)
        b=c[i];
        }

        int s1=0,s2=0;
        //cout<<a<<" "<<b<<endl;
        for(int i=0;i<n;i++)
        {
            if(c[i]==a)
                s1++;
            else
                s2++;
        }
        if(s1>s2)
        cout<<a<<endl;
        else if(s2>s1)
            cout<<b<<endl;
        else
            cout<<"Draw"<<endl;

  }
    return 0;
}
