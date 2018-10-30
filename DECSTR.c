#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,m,k;

char a[104]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a','z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
scanf("%d",&t);
while(t--)
{
    scanf("%d",&k);
    if(k==0)
    {
        printf("\n");
            continue;
    }
    m=1+k;
    m=104-m;
    if(k>=26&&k<51)
        m--;
    else if(k>=51&&k<76)
    m-=2;
    else if(k>=76)
        m-=3;
    for(i=m;i<104;i++)
        printf("%c",a[i]);
    printf("\n");
}
return 0;
}
