#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);

        int a[n];
        int ma=0;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>ma)
                ma=a[i];

        }
        int freq[ma+1];
        memset(freq,0,sizeof(freq));
         for(int i=0;i<n;i++)

            freq[a[i]]++;


        int s1[n],p1=0;
        int pos1[n];
        int s2[n],p2=0;
        int mark[ma+1];
        memset(mark,0,sizeof(mark));

        int yy[ma+1][2];

        for(int j=0;j<n;j++)
        {
            if(freq[a[j]]==1)
            {
              s1[p1]=a[j];
              pos1[p1++]=j;
            }
            else if(mark[a[j]]==0)
            {

                yy[a[j]][0]=j;
                mark[a[j]]=1;
                s2[p2++]=a[j];
            }
            else
            yy[a[j]][1]=j;

        }
        int b[n];

       if(p1>1&&p2>1)
       {

           for(int i=0;i<p1-1;i++)
           b[pos1[i+1]]=s1[i];
           b[pos1[0]]=s1[p1-1];
           int pp=0,tmp;
           for(int i=0;i<p2-1;i++)
           {
               for(int j=0;j<2;j++)
                b[yy[s2[i+1]][j]]=s2[i];

           }
            b[yy[s2[0]][0]]=s2[p2-1];
             b[yy[s2[0]][1]]=s2[p2-1];
       }
       else if(p1==1&&p2>1)
       {
           b[yy[s2[0]][0]]=s1[0];
           b[yy[s2[0]][1]]=s2[p2-1];

           for(int i=1;i<p2;i++)
           {
               b[yy[s2[i]][0]]=s2[i-1];
                b[yy[s2[i]][1]]=s2[i-1];
           }
           b[pos1[0]]=s2[p2-1];
       }
       else if(p2==1&&p1>1)
       {
           b[pos1[0]]=s2[0];
           b[pos1[1]]=s2[0];
           b[yy[s2[0]][0]]=s1[p1-1];
            b[yy[s2[0]][1]]=s1[p1-2];
            int l=0;
            for(int i=p1-1;i>=2;i--)
                b[pos1[i]]=s1[l++];


       }

       else if(p1==1&&p2==1)
       {
            b[pos1[0]]=s2[0];
            b[yy[s2[0]][0]]=s1[0];
             b[yy[s2[0]][1]]=s2[0];
       }
       else if(p1==0)
       {
           for(int i=0;i<p2-1;i++)
           {
               b[yy[s2[i+1]][0]]=s2[i];
                b[yy[s2[i+1]][1]]=s2[i];
           }
            b[yy[s2[0]][0]]=s2[p2-1];
             b[yy[s2[0]][1]]=s2[p2-1];
       }
       else if(p2==0)
       {

           for(int i=0;i<p1-1;i++)
            b[i+1]=s1[i];
           b[0]=s1[p1-1];
       }
       int cot=0;
       for(int i=0;i<n;i++)
       {
           if(b[i]!=a[i])
            cot++;
       }
       printf("%d\n",cot);
       for(int i=0;i<n;i++)
        printf("%d ",b[i]);
       printf("\n");
       printf("\n");
    }
    return 0;
}
