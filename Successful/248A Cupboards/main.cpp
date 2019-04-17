/*#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    int cz_a=0,cone_a=0,cz_b=0,cone_b=0;
    int ans1,ans2;
    int a[10000];
    int b[10000];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(k=1;k<=n;k++)
    {
        if(a[k]==0)
            cz_a++;
        else
            cone_a++;
    }
    for(j=1;j<=n;j++)
    {
        if(a[j]==0)
            cz_b++;
        else
            cone_b++;
    }
    if(cz_a>cone_a)
        ans1=cone_a;
    else
        ans1=cz_a;
    if(cz_b>cone_b)
        ans2=cone_b;
    else
        ans2=cz_b;
    //cout<<(ans1+ans2);
    cout<<cone_a<<cz_a<<cone_b<<cz_b;
    return 0;
}*/
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, l, r, left(0), right(0);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d%d", &l, &r);
        left += l;
        right += r;
    }
    printf("%d\n", min(left, n - left) + min(right, n - right));
    return 0;
}
