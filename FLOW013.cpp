#include<iostream>

using namespace std;

int main()
{
    int cases=0,a=0,b=0,c=0;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>a>>b>>c;
        if(a+b+c==180)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;
    }    
    return 0;
}