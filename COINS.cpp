#include<stdio.h>
#include<math.h>
#include<string.h>
long long int *arr;
long long int func(long long int n)
{
    if(n<=1000000)
        return arr[n];
    long long int a=n/2;
    long long int b=n/3;
    long long int c=n/4;
    return func(a)+func(b)+func(c);
}
int main()
{
    long long int test,n,q;
    arr=(long long int*) malloc(1000000 * sizeof(long long int));
    arr[0]=0;
    arr[1]=1;
    for(n=2;n<=1000000;n++)
    {
        q=arr[n/2]+arr[n/3]+arr[n/4];

        if(q>n)
            arr[n]=q;
        else
            arr[n]=n;
    }

    while(scanf("%lld", &n)!=EOF)
    {

       if(n<12)
       {
           printf("%lld\n",n);
       }
       else
       {
        q=func(n);
        printf("%lld\n",q);
       }
    }

    return 0;
}
