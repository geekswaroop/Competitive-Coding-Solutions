#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0,a[1000],i;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<m;i++)
    {
        if(a[i]<=0)
            sum+=a[i];
        else
            break;
    }
    cout<<(-1)*sum<<endl;
    return 0;
}
