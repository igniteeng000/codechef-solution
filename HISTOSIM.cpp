#include<stdio.h>
int main()
{
    int test,l,j,i,a,b,flag;
    int arr[26]={0};
    scanf("%d",&test);
    while(test--)
    {
        char a[1005];
        char b[1005];
        char arr[1005][3];
        scanf("%s",a);
        scanf("%s",b);
        l=strlen(a);

        flag=0;
        for(i=0;i<l;i++)
        {
           
            for(j=0;j<l;j++)
            {
             if((a[i]==a[j]&&b[i]!=b[j])||(b[i]==b[j]&&a[i]!=a[j]))
                flag=1;
            }

            
        }
        if(flag==1)
            printf("NO\n");
        else
            printf("YES\n");
    }

 return 0;
}
