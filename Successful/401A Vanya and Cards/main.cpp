#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i,sum=0,temp;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {   cin>>temp;
        sum+=temp;
    }
    if(-1*x<=sum && sum<=x && sum!=0)
    {
        cout<<"1";
    }
    else
    {
        if(sum%x==0)
        {
            cout<<abs(sum/x);
        }
        else
            cout<<abs(sum/x)+1;
    }
    return 0;
}
