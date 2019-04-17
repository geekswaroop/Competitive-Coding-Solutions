#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,r,cnt=0;
    cin>>l>>r;
    while(l&1 != r&1)
    {
        l>>1;
        r>>1;
        cnt++;
    }
    long long ans=pow(2,cnt+1)-1;
    cout<<ans;
    return 0;
}
