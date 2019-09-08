#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cn=0,i,j,temp,n,x;
    vector<int>v;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if((v[i]^v[j])==x)
                cn++;
        }
    }
    cout<<cn;
    return 0;
}
