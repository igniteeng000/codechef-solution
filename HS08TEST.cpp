#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float balance=0;
    int withdraw=0;
    cin>>withdraw;
    cin>>balance;
    if(withdraw%5==0)
    {
        if(withdraw<balance-0.50)
        {
            balance=balance-withdraw-0.50;
            cout<<fixed<<setprecision(2)<<balance;
        }
        else
        {
            cout<<fixed<<setprecision(2)<<balance;
        }
    }
    else
    {
        cout<<fixed<<setprecision(2)<<balance;
    }
    return(0);
}