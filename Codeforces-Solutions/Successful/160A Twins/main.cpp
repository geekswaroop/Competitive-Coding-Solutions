#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp,i,sum=0,sum1=0;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        sum1+=v[i];
    }
    for(i=(n-1);i>=0;i--)
    {
        sum+=v[i];
        if(sum > sum1/2)
            break;
    }
    int ans=n-i;
    //cout<<sum1<<" "<<sum;
    cout<<ans;
    return 0;
}
