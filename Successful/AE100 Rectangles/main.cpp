#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,cn=0;
    cin>>n;
    for(i=1;i<=sqrt(n);i++)
    {
        for(j=1;j<=sqrt(n);j++)
        {
            if(i*j==n)
                cn++;
        }
    }
    cout<<2*cn<<endl;
    return 0;
}
