#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,temp;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    if(v[0]==1)
    {
        for(i=0;i<n-1;i++)
    {
        if(v[i+1]==(v[i]+1))
            continue;
        else
        {
            cout<<v[i]+1;
            break;
        }
    }
    if(i== n-1)
        cout<<v[n-1]+1;
    }
    else
        cout<<"1";
    return 0;
}
