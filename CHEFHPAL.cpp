#include<bits/stdc++.h>
    #define lli long long int
    #define forl(i,a,b) for(int i=a;i<b;i++)
    #define sin(x) scanf("%s",x)
    #define pendl printf("\n")
    #define D double
    using namespace std;
    int main(){
   int test,n,a,i,j;
   scanf("%d",&test);
   char str[50];
   str[1]=str[2]=str[5]='a';
   str[3]=str[4]=str[6]='b';
   while(test--){
    scanf("%d %d",&n,&a);
    if(a==1){
        printf("%d ",n);
        for(i=1;i<=n;i++){
            printf("a");
        }
        printf("\n");
    }else if(a==2){
        switch(n){
    case 1:
        printf("1 a\n");
        break;
    case 2:
        printf("1 ab\n");
        break;
    case 5:
        printf("3 aaabb\n");
        break;
    case 6:
        printf("3 aaabab\n");
        break;
    case 7:
        printf("3 aaababb\n");
        break;
    case 8:
        printf("3 aaababbb\n");
        break;
    default:
        if(n==3||n==4){
            printf("2 ");
        }
        else{
            printf("4 ");
        }
        for(i=1;i<=n;i+=6){
            for(j=1;j<=6&&(i+j-1)<=n;j++){
                printf("%c",str[j]);
            }
        }
        printf("\n");
        }
    }else{
    printf("1 ");
    for(i=1;i<=n;i+=a){
        for(j=1;j<=a&&(i+j-1)<=n;j++){
            printf("%c",j+96);
        }
    }
    printf("\n");
    }
   }
    return 0;
    }
