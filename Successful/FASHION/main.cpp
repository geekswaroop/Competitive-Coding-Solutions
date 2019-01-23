#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int n,i;
        cin>>n;
        int m[n],g[n];
        for(i=0;i<n;i++)
        {
            cin>>m[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>g[i];
        }
        sort(m,m+n);sort(g,g+n);
        /*for(i=0;i<n;i++)
        {
            sum+=(m[i]*g[i]);
        }*/
        cout<<inner_product(m,m+n,g,sum)<<endl;
    }
    return 0;
}
