#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{   int temp1;
    int mx,mn,n,cn=0;
    cin>>n;
    cin>>temp1;
    mx=temp1;
    mn=temp1;
    for(int i=0;i<(n-1);i++)
    {   int temp;
        cin>>temp;
        if(temp>mx)
        {
            mx=temp;
            cn++;
        }
        if(temp<mn)
        {
            mn=temp;
            cn++;
        }

    }
    cout<<cn;
    return 0;
}
