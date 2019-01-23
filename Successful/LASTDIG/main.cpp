#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fastModExp(ll a,ll b,ll m){

    ll res = 1;
    while(b>0){
        if(b&1){
            res = (res*a)%m;
        }
        a = (a*a)%m;
        b = b>>1;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,ans;
        cin>>a>>b;
        ans=fastModExp(a,b,10);
        cout<<ans<<endl;
    }
    return 0;
}
