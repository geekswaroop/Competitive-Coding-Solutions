#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void fillPrefixSum(long long arr[], int n, long long prefixSum[])
{
    prefixSum[0] = arr[0];

    // Adding present element
    // with previous element
    for (int i = 1; i <= n; i++)
        prefixSum[i] = prefixSum[i-1] + arr[i];
}
int main()
{
    int n,m,i,l,r,type;
    cin>>n;
    long long v[n];
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    long long sv[n],su[n];
    fillPrefixSum(v,n,sv);
    sort(v+1,v+n+1);
    fillPrefixSum(v,n,su);
    cin>>m;
    while(m--)
    {
        cin>>type>>l>>r;
        if(type==1)
        {
            cout<<sv[r]-sv[l-1]<<endl;
        }
        else
        {
            cout<<su[r]-su[l-1]<<endl;
        }

    }
    /*for(i=0;i<n;i++)
    {
        cout<<sv[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<su[i]<<" ";
    }*/


    return 0;
}
