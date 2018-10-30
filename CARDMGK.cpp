#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int> vec;
        long long int x;
        for(long long int i=0;i<n;i++)
        {
            cin>>x;
            vec.push_back(x);
        }
        long long int np=0;
        bool flag=false;
        for(long long int i=0;i<n;i++)
        {

            if(!flag)
                {
                    x=vec[i];
                    ++np;
                }
            if(np>2)
            {
                break;
            }
            if(vec[i]>=x)
                {
                    x=vec[i];
                    flag=true;
                }
            else{
                    x=vec[i];
                    ++np;
                }

        }
        if(np<=2)
        {
            if(np<2)
            cout<<"YES";
            else if(vec[n-1]<=vec[0])
            cout<<"YES";
            else
                cout<<"NO";

        }
        else
            cout<<"NO";
        cout<<endl;

    }
    return 0;
}
