#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    int a[200000];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[k-1]==a[k])
        cout<<"-1";
    if(a[k-1]!=a[k])
        cout<<(a[k-1]+1);
    if(k==0)
        cout<<"-1";
    return 0;
}
