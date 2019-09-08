#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,temp,p,q;
    cin>>n;
    int value[n+1];
    fill(value,value+n+1,0);
    cin>>p;
    for(i=0;i<p;i++)
    {
       cin>>temp;
       value[temp]++;
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>temp;
        value[temp]++;
    }
    /*for(i=0;i<=n;i++)
    {
        cout<<value[i]<<" ";
    }*/
    int zeroes=count(value,value+n+1,0);
    if(zeroes==1)
    {
        cout<<"I become the guy.";

    }
    else
        cout<<"Oh, my keyboard!";
    return 0;
}
