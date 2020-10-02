#include<iostream>

using namespace std;

int main()
{
    int cases=0,a=0,b=0;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<">";
        }
        else if(b>a)
        {
            cout<<"<";
        }
        else
        {
            cout<<"=";
        }
        cout<<endl;
    }    
    return 0;
}