#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,temp;
    cin>>n;
    vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cout<<v[n-1]<<" ";
    for(i=1;i<n-1;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v[0];
    return 0;
}
