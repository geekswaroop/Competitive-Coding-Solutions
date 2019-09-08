#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    long long n,i,ans1,t1,t2,ans2,m;
    long long  a[200001];
    int mn=INT_MAX,mx=INT_MIN;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        if(m>mx)
            mx=m;
        if(m<mn)
            mn=m;
        a[m]++;
    }
   /* vector<int>x(b,b+n);
    sort(x.begin(),x.end());
    ans1=abs((b[n-1]-b[0]));
    t1=count(x.begin(),x.end(),b[0]);
    t2=count(x.begin(),x.end(),b[n-1]);
    ans2=t1*t2;
    cout<<ans1<<" "<<ans2;*/
    //sort(b,b+n);
    ans1=(mx-mn);
    t1=a[mx];
    t2=a[mn];
    ans2=t1*t2;
    cout<<ans1<<" "<<ans2;
    return 0;
}
