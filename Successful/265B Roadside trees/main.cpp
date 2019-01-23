#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        sum+=abs(a[i]-a[i+1]);
    }
    cout<<sum+a[0]+2*n-1;
    return 0;
}

