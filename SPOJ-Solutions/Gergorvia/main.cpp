#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,res,tot,i,a;

    while(scanf("%lld", &n)==1 && n)
    {   tot=0;res=0;

        for(i=0;i<n;i++)
        {
            cin>>a;
            tot+=a;
            res+=abs(tot);
        }
        cout<<res<<endl;
    }
    return 0;
}
