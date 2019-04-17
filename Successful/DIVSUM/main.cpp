//naive approach. testing whether optimizations necessary or not
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {   long long sum=0;
        cin>>n;
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                {   if(n!=1)
                    sum+=i;
                }
                else
                {
                    sum+=(i);
                    if(n!=1 && i!=1)
                        sum+=n/i;
                }

            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
