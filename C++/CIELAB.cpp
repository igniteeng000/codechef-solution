#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long int a, b;
    cin>>a>>b;

    a = a-b;
    //last digit
    b = a%10;

    if(b==9) a--;
    else a++;

    cout<<a;

    return 0;
}