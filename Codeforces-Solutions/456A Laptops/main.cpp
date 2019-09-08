#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,temp;
    int v[100001];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        v[a]=b;
    }
    for(i=0;i<n;i++)
    {
            temp=v[i];
            if(v[i+1]>temp)
                continue;
            else
            {
                cout<<"Happy Alex";
                break;
            }
    }
    if(i== n)
        cout<<"Poor Alex";

    return 0;
}
