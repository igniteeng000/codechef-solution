#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,a,b;
        cin>>k>>a>>b;
        int A=min(a,b),B=max(a,b);
        if(k%2==0)
        {
            if(B==(A+k/2))
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<min(B-A-1,k-B+A-1)<<endl;
            }
        }
        else
        {
            cout<<min(B-A-1,k-B+A-1)<<endl;
        }
    }
    return 0;
}
