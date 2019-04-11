#include <bits/stdc++.h>
using namespace std;
#define loop(i,x,n) for(int i=x;i<n;i++)
#define sf scanf
#define pf printf
int main()
{
    int t,n,q;
    sf("%d",&t);
    while(t--)
    {
        sf("%d%d",&n,&q);
       int arr[n+1],orig[n+1],s,cnt,flag,l,u,mid,small,big,left,right;
       map<int,int> ans,sm,bi;
        loop(i,1,n+1)
        sf("%d",&arr[i]),orig[i]=arr[i];
        sort(arr+1,arr+n+1);
        loop(i,1,n+1)
        {
            sm[arr[i]]=i-1;
            bi[arr[i]]=n-i;
        }
        loop(i,1,n+1)
        {
            s=orig[i];
            left=0,right=0;
            flag=0;
            l=1;
            u=n;
            small=sm[s];
            big=bi[s];
            while(l<=u)
            {
                mid=(l+u)/2;
                if(mid==i)
                {
                    flag=1;
                    break;
                }
                else if((i<mid&&s<orig[mid]&&big>0))
                    u=mid-1,big--;
                else if((i>mid&&s>orig[mid]&&small>0))
                    l=mid+1,small--;
                else if(i<mid&&s>orig[mid])
                {
                    //find an element strict greater than s
                    if(big>0)
                    {
                        big--;
                        left++;
                        u=mid-1;

                    }
                    else
                        break;
                }
                else if(i>mid&&s<orig[mid])
                {
                    //find an element strict less than s
                    if(small>0)
                    {
                        small--;
                        right++;
                        l=mid+1;

                    }
                    else
                        break;
                }
                else
                    break;
            }
            if(flag)
            ans[s]=max(left,right);
            else
            ans[s]=-1;
        }
        int temp;
        while(q--)
        sf("%d",&temp),
        pf("%d\n",ans[temp]);
    }
    return 0;
}
