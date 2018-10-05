#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin>>t;

    while(t--){
        long int n, m;
        cin>>n>>m;

        int job[n];

        for(long int i=0; i<n; i++) job[i]=0;

        for(long int i=0; i<m; i++){
            long int temp;
            cin>>temp;
            job[temp-1]=-1;
        }

        bool isHeadChef = true;
        //1 for head chef 2 for assistant

        for(long int i=0; i<n; i++){
            if(job[i]!=-1){
                if(isHeadChef){
                    job[i] = 1;
                    isHeadChef = false;
                }else {
                    job[i] = 2;
                    isHeadChef = true;
                }
            }
        }

        for(long int i=0; i<n; i++){
            if(job[i]==1) cout<<i+1<<" ";
        }cout<<"\n";
        for(long int i=0; i<n; i++){
            if(job[i]==2) cout<<i+1<<" ";
        }

    }

    return 0;
}
