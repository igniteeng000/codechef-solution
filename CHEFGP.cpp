#include<bits/stdc++.h>
    #define lli long long int
    #define forl(i,a,b) for(int i=a;i<b;i++)
    #define sin(x) scanf("%s",x)
    #define pendl printf("\n")
    #define D double
    using namespace std;
    int main()
    {
        lli test,i,noa,nob,x,y,na,nb,kiwi,ca,cb,l,bla,blb,cntb,cnta,counter,t,flag,j;
    scanf("%lld\n",&test);
    while(test--){
    char s[100005];
    sin(s);
    l=strlen(s);
    noa=0;
    nob=0;
    set<int>s1;
    long long int arr[120005]={0};
    long long int an[120005]={0};
    for(i=0;i<l;i++){
        if(s[i]=='a')
            noa++;
        else
            nob++;
    }
    double bla,blb;
    scanf("%lld %lld",&x,&y);
    bla=(D)noa/(D)x;
    blb=(D)nob/(D)y;
    if(bla>=blb){
        na=noa;
        nb=nob;
        ca=x;
        cb=y;
        counter=1;
        kiwi=0;
        cntb=0;
        for(i=1;i<=(noa+nob);i++){
        if(ca>0&&na>0){
        ca--;
        cb=y;
        arr[counter++]=1;
        na--;
        }
        else if(na>0){
            ca=x;
            if(nb>0&&cb>0){
            nb--;
            arr[counter++]=2;
            cb--;
            cntb++;
            }
            else{
               kiwi++;
               arr[counter++]=3;
               i--;
           //    printf("i is %lld\n",i);
            }

        }
        else{
            if(nb>0&&cb>0){
                cb--;
                arr[counter++]=2;
                nb--;
            }
            else if(nb>0){
                if((cntb*(y-1))>=nb){
                    for(j=x+1;j<=i;j+=(x+1)){
                        t=y-1;
                        flag=0;
                        while(nb>0&&t>0){
                            flag=1;
                            an[j]++;
                            nb--;
                            t--;
                        }
                        if(flag==1){
                            s1.insert(j);
                        }
                    }
                }
                else{
                kiwi++;
                cb=y;
                arr[counter++]=3;
                i--;
          //      printf("i is %lld\n",i);
                }
            }}
           //   if(counter==7)
            //    printf("i is %lld and arr[6] is %lld\n",i,arr[6]);
            }

           // printf("counter is %lld\n",counter);
            for(i=1;i<counter;i++){
                    if(s1.find(i)!=s1.end()){
                        for(j=1;j<=an[i];j++){
                            printf("b");
                        }
                        s1.erase(i);
                    }
                if(arr[i]==1){
                    printf("a");
                }
                else if(arr[i]==3){
                    printf("*");

                }
                else if(arr[i]==2){
                    printf("b");
                }
            }
            pendl;
    }
    else{
    na=noa;
    nb=nob;
    cnta=0;
    counter=1;
    ca=x;
    cb=y;
    kiwi=0;
    for(i=1;i<=(noa+nob);i++){
      if(cb>0&&nb>0){
        nb--;
        arr[counter++]=2;
        cb--;
        ca=x;
      }
      else if(nb>0){
            cb=y;
        if(na>0&&ca>0){
            ca--;
            cnta++;
      arr[counter++]=1;
      na--;
        }
        else{
            kiwi++;
            arr[counter++]=3;
            i--;
        }
      }
      else{
        if(na>0&&ca>0){
            na--;
            ca--;
            arr[counter++]=1;
        }
        else if(na>0){
                if((cnta*(x-1))>=na){
                for(j=y+1;j<=i;j+=(y+1)){
                        t=x-1;
                        flag=0;
                        while(na>0&&t>0){
                            flag=1;
                            an[j]++;
                            na--;
                            t--;
                        }
                        if(flag==1){
                            s1.insert(j);
                        }
                    }
                }
                else{
            i--;
            kiwi++;
            arr[counter++]=3;
            ca=x;}
        }}}
        for(i=1;i<counter;i++){

                 if(s1.find(i)!=s1.end()){
                        for(j=1;j<=an[i];j++){
                            printf("a");
                        }
                        s1.erase(i);
                    }
                if(arr[i]==2){
                    printf("b");
                }
                else if(arr[i]==3){
                    printf("*");
                    kiwi--;
                }
                else if(arr[i]==1){
                    printf("a");
                }
            }
            pendl;
    }

    }
        return 0;
    }
