#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int temp,ans1,ans2,i,j,k,mn=999,n;
    int a[101];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=(n-1);i++)
    {
        if(abs(a[i]-a[i+1])<mn)
        {
            mn =abs(a[i]-a[i+1]);
            ans1=i;
            ans2=(i+1);
        }
    }
    temp=abs(a[1]-a[n]);
    if(temp<mn)
    {
        ans1=n;
        ans2=1;
    }
    cout<<ans1<<" "<<ans2;
    return 0;
}
