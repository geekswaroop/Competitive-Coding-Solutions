#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 200000
int main()
{
    int n,i,max,min,s_max,s_min,temp;
    cin>>n;
    int a[N+5]={0};
    for(i=1;i<=n;i++)
    {
        cin>>temp;
        //cin>>temp2;
        a[temp]++;
        //cout<<a[i];
    }
    /*for(i=1;i<=7;i++)
    {

        cout<<a[i]<<" ";
    }*/
    for(i=1;i<=N;i++)
    {
        if(a[i]!=0)
            break;
        //cout<<a[i];
    }
    min=i;

    for(i=min+1;i<=N;i++)
    {
        if(a[i]!=0)
            break;
        //cout<<a[i];
    }
    s_min=i;
    for(i=N;i>0;i--)
    {
        if(a[i]!=0)
            break;
        //cout<<a[i];
    }
    max=i;
    for(i=(max-1);i>0;i--)
    {
        if(a[i]!=0)
            break;
                //cout<<a[i];
    }
    s_max=i;
    int t1=s_max-min;
    int t2=max-s_min;
    if(t1>t2)
        cout<<t2;
    else
        cout<<t1;
        //cout<<max<<" "<<min<<" "<<s_max<<" "<<s_min;

    return 0;
}
