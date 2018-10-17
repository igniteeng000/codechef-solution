#include<iostream>
using namespace std;
int main()
{

    int t, n;
    cin>>t;
    while(t-- > 0)
    {
        int i, p = 0, value  = 0;
        cin>>n;
        cin>>p;
        int a[n];
        for(i = 0; i < n; i++)
            cin>>a[i];

        for(i = 0; i < n; i++)
        {
             value = p-a[i];
            if(value >= 0)
            {
                cout<<"1";
                p = p-a[i];
            }
            else
            {
                cout<<"0";
            }

        }
        cout<<endl;

    }
}
