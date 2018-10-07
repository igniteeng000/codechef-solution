#include<bits/stdc++.h>
    #define lli long long int
    #define forl(i,a,b) for(int i=a;i<b;i++)
    #define sin(x) scanf("%s",x);
    using namespace std;
    int main()
    {
        lli xara;
    unsigned int test,n,i,j,flag,z,ans,sum;
    scanf("%u",&test);
    while(test--){
        scanf("%u",&n);
        unsigned int x,y;
        flag=2;
        for(i=40000;i<=60000;i++)
        {
            x=(n-1)*i;
            y=n*i;
            if((x>y)||(y<1000000))
                {
                    if(x>y)
                        {
                            flag=0;
                        }
                    else
                        flag=1;
                    break;}
            }
            z=x;
            ans=1;
            i-=1;
        if(flag==0)
          {

              ans=1;
              i+=1;
          }
        else
            {
                z=((n-1)*i)+1;
                x=4294967296-z;
            }
        for(j=1;j<=n;j++)
        {
            if(j==13)
                {
                 printf("1 ");
                }
                else if(flag==1&&j==10)
                    printf("%u ",x);
            else
                printf("%u ",i);
        }
        printf("\n");
    }
        return 0;
    }
