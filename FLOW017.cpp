#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int cases = 0, a = 0, b = 0, c = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            if(b>c)
            {
                cout<<b;
            }
            else
            {
                cout<<c;
            }
            
        }
        if (b > a && b > c)
        {
            if(a>c)
            {
                cout<<a;
            }
            else
            {
                cout<<c;
            }
            
        }
        if (c > b && c > a)
        {
            if(a>b)
            {
                cout<<a;
            }
            else
            {
                cout<<b;
            }
        }
    cout<<endl;
    }
    return 0;
}