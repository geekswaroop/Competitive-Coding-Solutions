#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int n,ans,i,j,G;
    while(scanf("%d", &n)==1 && n)
    {   G=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                G+=gcd(i,j);
            }
        }
        cout<<G<<endl;
    }
    return 0;
}
