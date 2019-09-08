#include <iostream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int conc[100];
    int sum=0;
    double ans;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>conc[i];
        sum+=conc[i];
    }
    ans=(sum/(1.0*n));
    printf("%.12f",ans);
    return 0;
}
