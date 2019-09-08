#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans,temp,i,sum=0,n;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    temp=*max_element(v.begin(),v.end());
    //FOR(I=0;I<N;I++)
    for(i=0;i<n;i++)
    {
        sum+=(temp-v[i]);
    }
    cout<<sum;
    return 0;
}
