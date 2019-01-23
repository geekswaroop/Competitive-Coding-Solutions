#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,n,even;
    cin>>n>>k;
    if(n%2==1)
        even=(n+3)/2;
    else
        even=(n/2+1);
    if(k<even)
    {
        cout<<(2*k-1);

    }
    else
        cout<<(2*(k+1-even));
    return 0;
}
