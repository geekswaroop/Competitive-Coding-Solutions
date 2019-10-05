#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long pairs(long long n)
{
    return ((n*(n-1))/2);
}
int main()
{
    long long n,m,min,max,a,b;
    cin>>n>>m;
    a=n/m;
    b=n%m;
    min=pairs(a)*(m-b)+pairs(a+1)*b;
    max=pairs(n-m+1);
    cout<<min<<" "<<max;

    return 0;
}
